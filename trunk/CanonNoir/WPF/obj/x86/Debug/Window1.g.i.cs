﻿#pragma checksum "..\..\..\Window1.xaml" "{406ea660-64cf-4c82-b6f0-42d48172a799}" "CCE9494D4768AD96BDB2008DF49F62C2"
//------------------------------------------------------------------------------
// <auto-generated>
//     Ce code a été généré par un outil.
//     Version du runtime :4.0.30319.1
//
//     Les modifications apportées à ce fichier peuvent provoquer un comportement incorrect et seront perdues si
//     le code est régénéré.
// </auto-generated>
//------------------------------------------------------------------------------

using System;
using System.Diagnostics;
using System.Windows;
using System.Windows.Automation;
using System.Windows.Controls;
using System.Windows.Controls.Primitives;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Ink;
using System.Windows.Input;
using System.Windows.Markup;
using System.Windows.Media;
using System.Windows.Media.Animation;
using System.Windows.Media.Effects;
using System.Windows.Media.Imaging;
using System.Windows.Media.Media3D;
using System.Windows.Media.TextFormatting;
using System.Windows.Navigation;
using System.Windows.Shapes;
using System.Windows.Shell;


namespace WPF {
    
    
    /// <summary>
    /// Window1
    /// </summary>
    [System.CodeDom.Compiler.GeneratedCodeAttribute("PresentationBuildTasks", "4.0.0.0")]
    public partial class Window1 : System.Windows.Window, System.Windows.Markup.IComponentConnector {
        
        
        #line 6 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Image canon_image;
        
        #line default
        #line hidden
        
        
        #line 8 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.StackPanel stackPanel1;
        
        #line default
        #line hidden
        
        
        #line 9 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBlock textChoixAngle;
        
        #line default
        #line hidden
        
        
        #line 10 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Image angle;
        
        #line default
        #line hidden
        
        
        #line 12 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.StackPanel puissance;
        
        #line default
        #line hidden
        
        
        #line 13 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBlock textChoixPuiss;
        
        #line default
        #line hidden
        
        
        #line 14 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Image puiss_image;
        
        #line default
        #line hidden
        
        
        #line 17 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBlock valeurAngle;
        
        #line default
        #line hidden
        
        
        #line 18 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.TextBlock valeurPuiss;
        
        #line default
        #line hidden
        
        
        #line 19 "..\..\..\Window1.xaml"
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1823:AvoidUnusedPrivateFields")]
        internal System.Windows.Controls.Canvas zoneTir;
        
        #line default
        #line hidden
        
        private bool _contentLoaded;
        
        /// <summary>
        /// InitializeComponent
        /// </summary>
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        public void InitializeComponent() {
            if (_contentLoaded) {
                return;
            }
            _contentLoaded = true;
            System.Uri resourceLocater = new System.Uri("/WPF;component/window1.xaml", System.UriKind.Relative);
            
            #line 1 "..\..\..\Window1.xaml"
            System.Windows.Application.LoadComponent(this, resourceLocater);
            
            #line default
            #line hidden
        }
        
        [System.Diagnostics.DebuggerNonUserCodeAttribute()]
        [System.ComponentModel.EditorBrowsableAttribute(System.ComponentModel.EditorBrowsableState.Never)]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Design", "CA1033:InterfaceMethodsShouldBeCallableByChildTypes")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Maintainability", "CA1502:AvoidExcessiveComplexity")]
        [System.Diagnostics.CodeAnalysis.SuppressMessageAttribute("Microsoft.Performance", "CA1800:DoNotCastUnnecessarily")]
        void System.Windows.Markup.IComponentConnector.Connect(int connectionId, object target) {
            switch (connectionId)
            {
            case 1:
            
            #line 4 "..\..\..\Window1.xaml"
            ((WPF.Window1)(target)).Closing += new System.ComponentModel.CancelEventHandler(this.MainForm_Closing);
            
            #line default
            #line hidden
            return;
            case 2:
            this.canon_image = ((System.Windows.Controls.Image)(target));
            return;
            case 3:
            this.stackPanel1 = ((System.Windows.Controls.StackPanel)(target));
            return;
            case 4:
            this.textChoixAngle = ((System.Windows.Controls.TextBlock)(target));
            return;
            case 5:
            this.angle = ((System.Windows.Controls.Image)(target));
            
            #line 10 "..\..\..\Window1.xaml"
            this.angle.MouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.choixAngle);
            
            #line default
            #line hidden
            return;
            case 6:
            this.puissance = ((System.Windows.Controls.StackPanel)(target));
            return;
            case 7:
            this.textChoixPuiss = ((System.Windows.Controls.TextBlock)(target));
            return;
            case 8:
            this.puiss_image = ((System.Windows.Controls.Image)(target));
            
            #line 14 "..\..\..\Window1.xaml"
            this.puiss_image.MouseLeftButtonDown += new System.Windows.Input.MouseButtonEventHandler(this.choixPuissance);
            
            #line default
            #line hidden
            return;
            case 9:
            this.valeurAngle = ((System.Windows.Controls.TextBlock)(target));
            return;
            case 10:
            this.valeurPuiss = ((System.Windows.Controls.TextBlock)(target));
            return;
            case 11:
            this.zoneTir = ((System.Windows.Controls.Canvas)(target));
            return;
            }
            this._contentLoaded = true;
        }
    }
}

