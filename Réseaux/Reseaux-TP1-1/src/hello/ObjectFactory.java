
package hello;

import javax.xml.bind.JAXBElement;
import javax.xml.bind.annotation.XmlElementDecl;
import javax.xml.bind.annotation.XmlRegistry;
import javax.xml.namespace.QName;


/**
 * This object contains factory methods for each 
 * Java content interface and Java element interface 
 * generated in the hello package. 
 * <p>An ObjectFactory allows you to programatically 
 * construct new instances of the Java representation 
 * for XML content. The Java representation of XML 
 * content can consist of schema derived interfaces 
 * and classes representing the binding of schema 
 * type definitions, element declarations and model 
 * groups.  Factory methods for each of these are 
 * provided in this class.
 * 
 */
@XmlRegistry
public class ObjectFactory {

    private final static QName _DivResponse_QNAME = new QName("http://hello/", "divResponse");
    private final static QName _Calculatrice_QNAME = new QName("http://hello/", "calculatrice");
    private final static QName _GetCircumferenceResponse_QNAME = new QName("http://hello/", "getCircumferenceResponse");
    private final static QName _GetAreaResponse_QNAME = new QName("http://hello/", "getAreaResponse");
    private final static QName _CalculatriceResponse_QNAME = new QName("http://hello/", "calculatriceResponse");
    private final static QName _GetArea_QNAME = new QName("http://hello/", "getArea");
    private final static QName _Div_QNAME = new QName("http://hello/", "div");
    private final static QName _Add_QNAME = new QName("http://hello/", "add");
    private final static QName _Mul_QNAME = new QName("http://hello/", "mul");
    private final static QName _GetCircumference_QNAME = new QName("http://hello/", "getCircumference");
    private final static QName _MulResponse_QNAME = new QName("http://hello/", "mulResponse");
    private final static QName _Sub_QNAME = new QName("http://hello/", "sub");
    private final static QName _AddResponse_QNAME = new QName("http://hello/", "addResponse");
    private final static QName _SubResponse_QNAME = new QName("http://hello/", "subResponse");

    /**
     * Create a new ObjectFactory that can be used to create new instances of schema derived classes for package: hello
     * 
     */
    public ObjectFactory() {
    }

    /**
     * Create an instance of {@link GetAreaResponse }
     * 
     */
    public GetAreaResponse createGetAreaResponse() {
        return new GetAreaResponse();
    }

    /**
     * Create an instance of {@link Add }
     * 
     */
    public Add createAdd() {
        return new Add();
    }

    /**
     * Create an instance of {@link Sub }
     * 
     */
    public Sub createSub() {
        return new Sub();
    }

    /**
     * Create an instance of {@link GetCircumference }
     * 
     */
    public GetCircumference createGetCircumference() {
        return new GetCircumference();
    }

    /**
     * Create an instance of {@link Calculatrice }
     * 
     */
    public Calculatrice createCalculatrice() {
        return new Calculatrice();
    }

    /**
     * Create an instance of {@link AddResponse }
     * 
     */
    public AddResponse createAddResponse() {
        return new AddResponse();
    }

    /**
     * Create an instance of {@link GetCircumferenceResponse }
     * 
     */
    public GetCircumferenceResponse createGetCircumferenceResponse() {
        return new GetCircumferenceResponse();
    }

    /**
     * Create an instance of {@link CalculatriceResponse }
     * 
     */
    public CalculatriceResponse createCalculatriceResponse() {
        return new CalculatriceResponse();
    }

    /**
     * Create an instance of {@link GetArea }
     * 
     */
    public GetArea createGetArea() {
        return new GetArea();
    }

    /**
     * Create an instance of {@link MulResponse }
     * 
     */
    public MulResponse createMulResponse() {
        return new MulResponse();
    }

    /**
     * Create an instance of {@link Mul }
     * 
     */
    public Mul createMul() {
        return new Mul();
    }

    /**
     * Create an instance of {@link SubResponse }
     * 
     */
    public SubResponse createSubResponse() {
        return new SubResponse();
    }

    /**
     * Create an instance of {@link Div }
     * 
     */
    public Div createDiv() {
        return new Div();
    }

    /**
     * Create an instance of {@link DivResponse }
     * 
     */
    public DivResponse createDivResponse() {
        return new DivResponse();
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link DivResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "divResponse")
    public JAXBElement<DivResponse> createDivResponse(DivResponse value) {
        return new JAXBElement<DivResponse>(_DivResponse_QNAME, DivResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Calculatrice }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "calculatrice")
    public JAXBElement<Calculatrice> createCalculatrice(Calculatrice value) {
        return new JAXBElement<Calculatrice>(_Calculatrice_QNAME, Calculatrice.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link GetCircumferenceResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "getCircumferenceResponse")
    public JAXBElement<GetCircumferenceResponse> createGetCircumferenceResponse(GetCircumferenceResponse value) {
        return new JAXBElement<GetCircumferenceResponse>(_GetCircumferenceResponse_QNAME, GetCircumferenceResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link GetAreaResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "getAreaResponse")
    public JAXBElement<GetAreaResponse> createGetAreaResponse(GetAreaResponse value) {
        return new JAXBElement<GetAreaResponse>(_GetAreaResponse_QNAME, GetAreaResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link CalculatriceResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "calculatriceResponse")
    public JAXBElement<CalculatriceResponse> createCalculatriceResponse(CalculatriceResponse value) {
        return new JAXBElement<CalculatriceResponse>(_CalculatriceResponse_QNAME, CalculatriceResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link GetArea }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "getArea")
    public JAXBElement<GetArea> createGetArea(GetArea value) {
        return new JAXBElement<GetArea>(_GetArea_QNAME, GetArea.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Div }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "div")
    public JAXBElement<Div> createDiv(Div value) {
        return new JAXBElement<Div>(_Div_QNAME, Div.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Add }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "add")
    public JAXBElement<Add> createAdd(Add value) {
        return new JAXBElement<Add>(_Add_QNAME, Add.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Mul }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "mul")
    public JAXBElement<Mul> createMul(Mul value) {
        return new JAXBElement<Mul>(_Mul_QNAME, Mul.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link GetCircumference }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "getCircumference")
    public JAXBElement<GetCircumference> createGetCircumference(GetCircumference value) {
        return new JAXBElement<GetCircumference>(_GetCircumference_QNAME, GetCircumference.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link MulResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "mulResponse")
    public JAXBElement<MulResponse> createMulResponse(MulResponse value) {
        return new JAXBElement<MulResponse>(_MulResponse_QNAME, MulResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link Sub }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "sub")
    public JAXBElement<Sub> createSub(Sub value) {
        return new JAXBElement<Sub>(_Sub_QNAME, Sub.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link AddResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "addResponse")
    public JAXBElement<AddResponse> createAddResponse(AddResponse value) {
        return new JAXBElement<AddResponse>(_AddResponse_QNAME, AddResponse.class, null, value);
    }

    /**
     * Create an instance of {@link JAXBElement }{@code <}{@link SubResponse }{@code >}}
     * 
     */
    @XmlElementDecl(namespace = "http://hello/", name = "subResponse")
    public JAXBElement<SubResponse> createSubResponse(SubResponse value) {
        return new JAXBElement<SubResponse>(_SubResponse_QNAME, SubResponse.class, null, value);
    }

}
