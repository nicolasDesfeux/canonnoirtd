
package net.webservicex;

import javax.jws.WebMethod;
import javax.jws.WebParam;
import javax.jws.WebResult;
import javax.jws.WebService;
import javax.xml.bind.annotation.XmlSeeAlso;
import javax.xml.ws.RequestWrapper;
import javax.xml.ws.ResponseWrapper;


/**
 * This class was generated by the JAX-WS RI.
 * JAX-WS RI 2.1.6
 * Generated source version: 2.1
 * 
 */
@WebService(name = "SunSetRiseServiceSoap", targetNamespace = "http://www.webserviceX.NET/")
@XmlSeeAlso({
    ObjectFactory.class
})
public interface SunSetRiseServiceSoap {


    /**
     * Get Sunset and Sunrise time for any location in the world<br><b>Longitude:</b>Positive in Western Hemisphere,Negative in Eastern Hemisphere<br><b>Latitude:</b>Positive in Northern Hemisphere,Negative in Southern Hemisphere
     * 
     * @param l
     * @return
     *     returns net.webservicex.LatLonDate
     */
    @WebMethod(operationName = "GetSunSetRiseTime", action = "http://www.webserviceX.NET/GetSunSetRiseTime")
    @WebResult(name = "GetSunSetRiseTimeResult", targetNamespace = "http://www.webserviceX.NET/")
    @RequestWrapper(localName = "GetSunSetRiseTime", targetNamespace = "http://www.webserviceX.NET/", className = "net.webservicex.GetSunSetRiseTime")
    @ResponseWrapper(localName = "GetSunSetRiseTimeResponse", targetNamespace = "http://www.webserviceX.NET/", className = "net.webservicex.GetSunSetRiseTimeResponse")
    public LatLonDate getSunSetRiseTime(
        @WebParam(name = "L", targetNamespace = "http://www.webserviceX.NET/")
        LatLonDate l);

}
