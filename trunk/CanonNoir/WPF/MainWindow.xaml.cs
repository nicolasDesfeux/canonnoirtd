﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;
using Wrapper;
using System.Runtime.InteropServices;
using System.Windows.Threading;

namespace WPF
{
    /// <summary>
    /// Interactions for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        WrapperFacade FacadeW;
        //1/11 of the click area. For the moment it's a constant, but we can perhaps make it dynamic.
        private static double HAUTEUR_CASE = 53.75;

        // 1/8 of the click area. For the moment it's a constant, but we can perhaps make it dynamic.
        private static double LARGEUR_CASE = 60.454545;

        private const int ROUGE = 1;
        private const int BLEU = 2;
        private const int VERT = 3;
        private const int JAUNE = 4;
        // Those variables are usefull in order to "clean" the map (we mean erase the rectangle that we draw).
        private int nbCasesRect = 0;
        private int dernierIndex = 0;
        private int nbCasesChoix = 0;
        private int dernierIndexPort = 0;
        

        /// <summary>
        /// Method for creation of a new main Window. We need to associated a Facade to this Windows.
        /// At the beginning, we can not roll the dice, so we disabled it.
        /// </summary>
        public MainWindow()
        {
            InitializeComponent();
            //Creation of a Facade, thanks to the Wrapper.
            FacadeW = new WrapperFacade();
            LanceDes.IsEnabled = false;
        }

        /// <summary>
        /// Method that create a new frame for the shoot between boats.
        /// </summary>
        /// <param name="sender"></param>
        /// <param name="e"></param>
        private void tirCanon(object sender, RoutedEventArgs e)
        {
            Window1 w = new Window1();
            w.Show();
        }

        /// <summary>
        /// This function is used to set a boat at a given position.
        /// </summary>
        /// <param name="x">boat's x</param>
        /// <param name="y">boat's y</param>
        /// <param name="type">Give the type of boat : 0 for Caravelle, 1 for Frégate, 2 for Radeau</param>
        /// <param name="tresor">true if a tresor is on the boat, else false.</param>
        private void afficherBateau(int x, int y, int type, bool tresor,int couleur)
        {
            String bateau = "bateau-";
            switch (type)
            {
                case 0:
                    bateau += "Caravelle";
                    break;
                case 1:
                    bateau += "fregate";
                    break;
                case 2:
                    bateau += "radeau";
                    break;

            }

            if (tresor) bateau += "-tresor";
            switch (couleur) 
            {
                case BLEU:
                    bateau += "_bleu.bmp";
                    break;
                case ROUGE:
                    bateau+="_rouge.bmp";
                    break;
                case VERT:
                    bateau += "_vert.bmp";
                    break;
                case JAUNE:
                    bateau += "_jaune.bmp";
                    break;
                default:
                    break;
            }
            Image image = new Image();
            BitmapImage bateau_img = new BitmapImage(new Uri("Images/" + bateau, UriKind.Relative));
            image.Source = bateau_img;
            image.Height = HAUTEUR_CASE - 5;
            image.Width = LARGEUR_CASE -5 ;
            image.HorizontalAlignment = HorizontalAlignment.Left;
            image.VerticalAlignment = VerticalAlignment.Center;
            image.Margin = new Thickness(x * LARGEUR_CASE+5, y * HAUTEUR_CASE, 0, 0);

            clickZone.Children.Add(image);
        }


        /// <summary>
        /// Method that create Rectangle around boxes of the map.
        /// </summary>
        private void setCases()
        {
            int d = dernierIndexPort - nbCasesRect;
            int e = dernierIndex - nbCasesChoix;
            plateau.Children.RemoveRange(d+1, nbCasesRect);
            clickZone.Children.RemoveRange(e+1, nbCasesChoix);
            nbCasesRect =0;
            nbCasesChoix =0;
            if (FacadeW.activerCases())
            {
                //This pointer is create to get the table of active boxes from the Facade.
                IntPtr a = new IntPtr(FacadeW.getCasesActives().GetHashCode());
                /*Display enable case*/
                for (int i = 0; i < 88; i++)
                {
                    //This integer is create by reading the content associate to the pointer.
                    int b = Marshal.ReadInt32(a);
                    // We "incremente" a from the size of an int, to get the next int from the table.
                    a += sizeof(int);
                    //
                    //Display the available ports
                    //
                    if (b == 1 && FacadeW.affichePorts())
                    {
                        Rectangle myRect = new System.Windows.Shapes.Rectangle();
                        myRect.Stroke = System.Windows.Media.Brushes.Purple;
                        myRect.StrokeThickness = 7;
                        myRect.HorizontalAlignment = HorizontalAlignment.Left;
                        myRect.VerticalAlignment = VerticalAlignment.Center;
                        
                        int y = i / 11;
                        int x = i % 11;

                        myRect.Height = HAUTEUR_CASE;
                        myRect.Width = LARGEUR_CASE;
                        double marghaut = x * LARGEUR_CASE;
                        double marggauche = y * HAUTEUR_CASE;
                        nbCasesRect++;
                        myRect.Height += 20;
                        myRect.Width += 23;
                        if (x == 10)
                        {
                            marghaut += clickZone.Margin.Left - 5;
                        }
                        if (y == 7)
                        {
                            marggauche += clickZone.Margin.Top - 3;
                        }

                        myRect.Margin = new Thickness(marghaut, marggauche, 0, 0);

                        plateau.Children.Add(myRect);
                        dernierIndexPort = plateau.Children.IndexOf(myRect);
                    }

                        //Display boxes for boat's move.
                    else if (b == 1)
                    {
                        Rectangle myRect = new System.Windows.Shapes.Rectangle();
                        myRect.Stroke = System.Windows.Media.Brushes.Purple;
                        myRect.StrokeThickness = 7;
                        myRect.HorizontalAlignment = HorizontalAlignment.Left;
                        myRect.VerticalAlignment = VerticalAlignment.Center;
                        //La taille des rectangles devrait varier suivant port ou case normale
                        int y = i / 11;
                        int x = i % 11;
                        nbCasesChoix++;
                        myRect.Height = HAUTEUR_CASE;
                        myRect.Width = LARGEUR_CASE;
                        double marghaut = x * LARGEUR_CASE+2;
                        double marggauche = y * HAUTEUR_CASE+5;

                        myRect.Margin = new Thickness(marghaut, marggauche, 0, 0);

                        clickZone.Children.Add(myRect);
                        dernierIndex = clickZone.Children.IndexOf(myRect);
                    }
                }
            }
           }
        private void init_Jeu(int a)
        {
            Init.Visibility = System.Windows.Visibility.Hidden;
            /*System.Windows.Thickness t = new Thickness(0, -40, 0, 0);
            Jeu.Margin = t;*/
            switch (a)
            {
                case 2:
                    joueur3.Visibility = System.Windows.Visibility.Hidden;
                    joueur4.Visibility = System.Windows.Visibility.Hidden;
                    break;
                case 3:
                    joueur4.Visibility = System.Windows.Visibility.Hidden;
                    break;
                default:
                break;
            };
            FacadeW.setNbJoueurs(a);
            this.setCases();
            textBlock3.Text = FacadeW.getMessage() + " <- Message du moteur";
            Jeu.Visibility = System.Windows.Visibility.Visible;
        }
        private void button1_Click(object sender, RoutedEventArgs e)
        {
            this.init_Jeu(2);
        }
            private void button2_Click(object sender, RoutedEventArgs e)
        {
            this.init_Jeu(4);
        }
        private void button3_Click(object sender, RoutedEventArgs e)
        {
            this.init_Jeu(3);
        }
        
        private void fullscreen(object sender, RoutedEventArgs e)
        {
            this.WindowState= System.Windows.WindowState.Maximized;
        }

        private void BoatUpdate()
        {
            IntPtr a = new IntPtr(FacadeW.getBateaux().GetHashCode());
            int d = (FacadeW.getNbJoueurs() == 3) ? 3 : 4;
            for (int i = 0; i < d; i++)
            {
                int x = Marshal.ReadInt32(a);
                a+=sizeof (int);
                int y = Marshal.ReadInt32(a);
                a += sizeof(int);
                int tre = Marshal.ReadInt32(a);
                bool tresor = (tre == 1) ? true : false;
                a += sizeof(int);
                int type = Marshal.ReadInt32(a);
                a += sizeof(int);
                int couleur = Marshal.ReadInt32(a);
                this.afficherBateau(x, y, type, tresor, couleur);
                a += sizeof(int);
            }
        }

        private void clickZone_MouseLeftButtonDown(object sender, MouseButtonEventArgs e)
        {
            this.BoatUpdate();
            if (FacadeW.activerCases())
            {
                double a = Mouse.GetPosition(clickZone).X;
                a /= LARGEUR_CASE;
                int x = (int)a + 1;
                double b = Mouse.GetPosition(clickZone).Y;
                b /= HAUTEUR_CASE;
                int y = (int)b + 1;
                FacadeW.setClick(x, y);
                this.setCases();
                this.LanceDes.IsEnabled = FacadeW.activerDes();
                textBlock3.Text = FacadeW.getMessage();
                double num_case = (y - 1) * 11 + x;
                //Test affichage, c'est ok !
                afficherBateau(5,5, 0, false, 1);
                afficherBateau(1, 1,1, false, 2);
                afficherBateau(8, 8, 2, false, 3);
            }
        }

        private void LanceDes_Click(object sender, RoutedEventArgs e)
        {
            //LanceDes.IsEnabled = false;
            int count = 0;
            //Pour le lancer de Dés, c'est un systeme qui permet de faire des pauses.
            DispatcherTimer _lancerDesTimer = new DispatcherTimer(DispatcherPriority.Normal);
            _lancerDesTimer.Interval = TimeSpan.FromMilliseconds(100);
            _lancerDesTimer.Tick += delegate
            {
                Random rdm1 = new Random(unchecked((int)DateTime.Now.Ticks));
                int a = rdm1.Next(1, 6);
                des1.Source = new BitmapImage(new Uri("Images/face"+a+".jpg", UriKind.Relative));
                a = rdm1.Next(1, 6);
                des2.Source = new BitmapImage(new Uri("Images/face" + a + ".jpg", UriKind.Relative));
                count++;
                if (count > 10)
                {
                    _lancerDesTimer.Stop();
                    count = 0;
                    FacadeW.lancerDes();
                    this.LanceDes.IsEnabled = FacadeW.activerDes();
                    this.setCases();
                    textBlock3.Text = FacadeW.getMessage() + " <- Message du moteur";
                    des1.Source = new BitmapImage(new Uri("Images/face" + FacadeW.getDes1() + ".jpg", UriKind.Relative));
                    des2.Source = new BitmapImage(new Uri("Images/face" + FacadeW.getDes2() + ".jpg", UriKind.Relative));
                    //MessageBox.Show(FacadeW.getDes1() + " " + FacadeW.getDes2());
                }
            };
            _lancerDesTimer.Start();
            
        }


    }
}
