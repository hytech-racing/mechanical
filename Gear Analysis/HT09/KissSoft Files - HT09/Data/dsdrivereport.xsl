<?xml version="1.0" encoding="UTF-8" ?>
<xsl:stylesheet xmlns:xsl="http://www.w3.org/1999/XSL/Transform"
                xmlns:dsdrive="urn:com:dassaultsystemes:dsdrive"
                version="1.0">
  <xsl:output method="html" doctype-system="about:legacy-compat" />
  <xsl:template match="/">
    <html>
      <head>
        <meta content="text/html; charset=utf-8" http-equiv="Content-Type" />
        <title>3DExperience Drive Native App Report</title>
        <style>
          /* Body style, for the entire document */
          body
          {
          background: #FFFFFF;
          color: #1E1E1F;
          font-family: "Segoe UI", Tahoma, Geneva, Verdana, sans-serif;
          padding: 0;
          margin: 0;
          }

          /* Header1 style, used for the main title */
          h1
          {
          padding: 10px 0px 10px 10px;
          font-size: 21pt;
          background-color: #005584;
          border-bottom: 1px #005584 solid;
          color: #FFFFFF;
          margin: 0;
          font-weight: normal;
          }

          /* Header2 style, used for "Overview" and other sections */
          h2
          {
          font-size: 18pt;
          font-weight: normal;
          padding: 15px 0 5px 0;
          margin: 0;
          text-decoration: underline;
          }

          /* Header3 style, used for sub-sections, such as project name */
          h3
          {
          font-weight: normal;
          font-size: 15pt;
          margin: 0;
          padding: 15px 0 5px 0;
          background-color: transparent;
          }

          /* Color all hyperlinks one color */
          a
          {
          color: #005584;
          cursor: pointer;
          }

          /* Table styles */
          table
          {
          border-spacing: 0 0;
          border-collapse: collapse;
          font-size: 10pt;
          }

          table th
          {
          background: #E7E7E8;
          text-align: left;
          text-decoration: none;
          font-weight: normal;
          padding: 3px 6px 3px 6px;
          }

          table td
          {
          vertical-align: top;
          padding: 3px 6px 5px 5px;
          margin: 0px;
          border: 1px solid #E7E7E8;
          background: #F7F7F8;
          }

          /* Local link is a style for hyperlinks that link to file:/// content, there are lots so color them as 'normal' text until the user mouse overs */
          .localLink
          {
          color: #1E1E1F;
          background: #EEEEED;
          text-decoration: none;
          }

          .localLink:hover
          {
          color: #1382CE;
          background: #FFFF99;
          text-decoration: none;
          }

          /* Center text, used in the over views cells that contain message level counts */
          .textCentered
          {
          text-align: center;
          }
          .textCenteredDate
          {
          text-align: center;
          width: 250px;
          }

          /* The message cells in message tables should take up all avaliable space */
          .messageCell
          {
          width: 100%;
          }

          /* Log cell */
          .logCell
          {
          border-collapse: collapse;
          color: #000000;
          font-size: 100%;
          margin-bottom: 10px;
          margin-left: 13px;
          margin-top: 6px;
          }

          /* Log text */
          .logText
          {
          font-family: "Courier New", "Courier", monospace;
          font-size: 12px;
          background-color: #ffffff;
          border-bottom: #cdcdcd 1px solid;
          border-left: #cdcdcd 1px solid;
          border-right: #cdcdcd 1px solid;
          border-top: #cdcdcd 1px solid;
          color: #000000;
          padding-left: 6px;
          font-weight: normal;
          }

          /* Padding around the content after the h1 */
          .content
          {
          padding: 0px 12px 12px 12px;
          }

          /* The overview table expands to width, with a max width of 97% */
          #overview table
          {
          width: auto;
          max-width: 75%;
          }

          /* The messages tables are always 97% width */
          #messages table
          {
          width: 97%;
          }

          /* All icons */
          .IconSuccessEncoded, .IconInfoEncoded, .IconWarningEncoded, .IconErrorEncoded {
          min-width:18px;
          min-height:18px;
          background-repeat:no-repeat;
          background-position:center;
          }

          /* Success icon encoded */
          .IconSuccessEncoded {
          background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAACXBIWXMAAA7EAAAOxAGVKw4bAAABOElEQVR4XqVTIWvDQBh9HVWBwWzEYGow19KpQiBqrqKiYqpVkf0BcTX9ASdr2jBZMRFRe1CYysjcYDAoTIS5wCB6eXAXsjt2YezBme/73vfeF156MFBV1QLAHEBotCSAxPO8HVo4axGv6pfnn/k2lnEYPARoP9bY4wxnoUAHUIV8/bS+OLwf4MLsZobl7bIEMKzdnLSDR5GJTjKxf92Ds+SAJ/Dm2tqAjd8wuZ4gizKk92mzhBxy6WDOggvRKAKxed78cEIuF4THj6NT3T/3UXwVSN9SaChOyAV/ULfRhwHeScWVXIEw1C2YDqiklTvV9QIZXAZQoBIVqexUVxzJBQnDYbuAU11xEp1EpnBgBcmdxpc6iUOdxGk8jkvDSVeUp81HZKaZbW4Vd0LdZ9/MHmc4qzj49+/8DReTp9S7vY7uAAAAAElFTkSuQmCC); }

          /* Information icon encoded */
          .IconInfoEncoded {
          background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAACXBIWXMAAA7EAAAOxAGVKw4bAAABBElEQVR4Xs2TsYrCQBCG1wVFo3DXWHkHNvZJIdem8AXiA5i8xRXWFvcWiVibF7BIKxamtwmolY2FxsNrnF9GiVkSCGnuh2GL2e9nZvm3IlKK49ihw6YyU62AytM0zU0ClQTYpcNfHv50d3MRi/31hR50asLpNcRXuxoSYJFRxAZPeP29Or3Po1+RJ5iM9eaRMAMmkhv+JDwr8G70ea+kMB3uggEosfNj7BwpJmDAYgI7C/6YblGZJmBhYKYfTF1BFTOmFCX1PwwChKSomAlg4CEcRcWMJ5FtxHPYrReCwYCVDFg//dYRjcwcqFG2no/IH8OgRjgz33g/dWf0cAd3mRGlv/MNZL1xS4xD8eEAAAAASUVORK5CYII=); }

          /* Warning icon encoded */
          .IconWarningEncoded {
          background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAACXBIWXMAAA7EAAAOxAGVKw4bAAAAx0lEQVR4XpWSMQ7CMAxFf4xAyBMLCxMrO8dhaBcuwdCJS3RJBw7SA/QGTCxdWJgiQYWKXJWKIXHIlyw5lqr34tQgEOdcBsCOx5yZK3hCCKdYXneQkh4pEfqzLfu+wVDSyyzFoJjfz9NB+pAF+eizx2Vruts0k15mPgvS6GYvpVtQhB61IB/dk6AF6fS4Ben0uIX5odtFe8Q/eW1KvFeH4e8khT6+gm5B+t3juyDt7n0jpe+CANTd+oTUjN/U3yVaABnSUjFz/gFq44JaVSCXeQAAAABJRU5ErkJggg==); }

          /* Error icon encoded */
          .IconErrorEncoded {
          background-image: url(data:image/png;base64,iVBORw0KGgoAAAANSUhEUgAAABAAAAAQCAYAAAAf8/9hAAAACXBIWXMAAA7EAAAOxAGVKw4bAAABP0lEQVR4XqWTvUoDQRSFr4NBWRAD+gA+gMXmDWJlFbC3iCBY2Qm2YmttKyhYaaFtGiPY2CWFD2BjEwiugkv8XecbcmHmEgTJgUs2371ndmY4OyNGZVluedD21TStW19nWZadKrDGFV+915tONdhsVU/LkhSMHjPMqi/sYAx6b3s79Y/Lc/lLc9u7kh0cFR40/G4e3ZhflYf7wVxbzUNZKX8/ORZm8cAdZ/66v8tpYFy67lLJIpYziwev48JGHsRyi3UdVnNgsfDg5fzpZTXz6rt4rhC/0TO9ZBbvrBh9PvRluLGWvPXnpYCFnpWTKWUXiM/Mm6n4TiYGqKvBMefn/0SmwcLriOe8D4fKnlnvBBYLD15NIinMNUjIXFjMNY19n8RGEmUSRkj+HWUeAKy6cNGR2npLrGD0mFEzfOrP+Rf4+xT8EskwMAAAAABJRU5ErkJggg==); }
        </style>
        <script>
          //<![CDATA[
          // Startup 
          // Hook up the the loaded event for the document.
          var startupFunction = function() {
            linkifyElement("originid");
            linkifyElement("targetid");
            format_number_with_space();
          };

          if(window.attachEvent) {
          window.attachEvent('onload', startupFunction);
          }
          else if (window.addEventListener) {
          window.addEventListener('load', startupFunction, false);
          }
          else {
          document.addEventListener('load', startupFunction, false);
          } 

          // Linkifies the specified text content, replaces candidate links with html links.
          function linkify(text) {
           if(!text || 0 === text.length) {
               return text; 
           }

           // Find http, https and ftp links and replace them with hyper links.
           var urlLink = /(http|https|ftp)\:\/\/[a-zA-Z0-9\-\.]+(:[a-zA-Z0-9]*)?\/?([a-zA-Z0-9\-\._\?\,\/\\\+&%\$#\=~;\{\}\:])*/gi;

           return text.replace(urlLink, '<a href="$&">$&</a>') ;
          }

          // Linkifies the specified element by ID.
          function linkifyElement(id) {
          var element = document.getElementById(id);
          if(!!element) {
            element.innerHTML = linkify(element.innerHTML); 
          }
          }

          // Toggle visibility.
          function toggle_visibility(id) {
            var e = document.getElementById(id+'id');
            var i = document.getElementById(id+'toggleid');
            if(e.style.display == 'block') {
              // Plus icon.
              i.src = 'data:image/x-icon;base64,AAABAAEAEBAAAAEAIABoBAAAFgAAACgAAAAQAAAAIAAAAAEAIAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8AAAAAMAAAADMAAAAzAAAAMwAAADMAAAAzAAAAMwAAADMAAAAj////AP///wD///8A////AP///wD///8A////AISEhPKEhYX/g4OE/4ODg/+Dg4P/g4OD/4ODhP+EhYX/e3t7wP///wD///8A////AP///wD///8A////AP///wCEhYX/xsLA/766uP++urj/vrq4/766uP++urj/xsLA/4SFhf////8A////AP///wD///8A////AP///wD///8Ag4OD/8TAvv+xrqz/sa6s//////+xrqz/sa6s/8TAvv+Dg4P/////AP///wD///8A////AP///wD///8A////AIKCg//FwcD/paKg/6Shn///////pKGf/6WioP/FwcD/goKD/////wD///8A////AP///wD///8A////AP///wCCgoL/xsTB////////////////////////////xsTB/4KCgv////8A////AP///wD///8A////AP///wD///8AgoKC/83Lyf+Wk5H/lpOR//////+Wk5H/lpOR/83Lyf+CgoL/////AP///wD///8A////AP///wD///8A////AIODg//Ny8n/k4+N/5SRj///////lJGP/5OPjf/Ny8n/g4OD/////wD///8A////AP///wD///8A////AP///wCEhIX/zcvJ/83Lyf/Ny8n/zcvJ/83Lyf/Ny8n/zcvJ/4SEhf////8A////AP///wD///8A////AP///wD///8AhoeH74WFhf+EhIT/hISE/4SEhP+EhIT/hISE/4WFhf+Gh4ew////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A//8AAP//AAD//wAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAP//AAD//wAA//8AAA==';
              e.style.display = 'none';
            }
            else {
              // Minus icon.
              i.src = 'data:image/x-icon;base64,AAABAAEAEBAAAAEAIABoBAAAFgAAACgAAAAQAAAAIAAAAAEAIAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8AAAAAMAAAADMAAAAzAAAAMwAAADMAAAAzAAAAMwAAADMAAAAj////AP///wD///8A////AP///wD///8A////AISEhPKEhYX/g4OE/4ODg/+Dg4P/g4OD/4ODhP+EhYX/e3t7wP///wD///8A////AP///wD///8A////AP///wCEhYX/xsLA/766uP++urj/vrq4/766uP++urj/xsLA/4SFhf////8A////AP///wD///8A////AP///wD///8Ag4OD/8TAvv+xrqz/sa6s/7GurP+xrqz/sa6s/8TAvv+Dg4P/////AP///wD///8A////AP///wD///8A////AIKCg//FwcD/paKg/6Shn/+koZ//pKGf/6WioP/FwcD/goKD/////wD///8A////AP///wD///8A////AP///wCCgoL/xsTB////////////////////////////xsTB/4KCgv////8A////AP///wD///8A////AP///wD///8AgoKC/83Lyf+Wk5H/lpOR/5aTkf+Wk5H/lpOR/83Lyf+CgoL/////AP///wD///8A////AP///wD///8A////AIODg//Ny8n/k4+N/5SRj/+UkY//lJGP/5OPjf/Ny8n/g4OD/////wD///8A////AP///wD///8A////AP///wCEhIX/zcvJ/83Lyf/Ny8n/zcvJ/83Lyf/Ny8n/zcvJ/4SEhf////8A////AP///wD///8A////AP///wD///8AhoeH74WFhf+EhIT/hISE/4SEhP+EhIT/hISE/4WFhf+Gh4ew////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A//8AAP//AAD//wAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAP//AAD//wAA//8AAA==';
              e.style.display = 'block';
            }
          }

          function numberWithSpace(x) {
            return x.toString().replace(/\B(?=(\d{3})+(?!\d))/g, " ");
          }

          function format_number_with_space() {
            var dc, fc, s;

            /* Total statistics */

            dc = document.getElementById("DirectoryCount");
            if(dc) dc.innerHTML = numberWithSpace(dc.innerHTML);

            fc = document.getElementById("FileCount");
            if(fc) fc.innerHTML = numberWithSpace(fc.innerHTML);

            s = document.getElementById("Size");
            if(s) s.innerHTML = numberWithSpace(s.innerHTML);

            /* Synced statistics */

            dc = document.getElementById("SyncedDirectoryCount");
            if(dc) dc.innerHTML = numberWithSpace(dc.innerHTML);

            fc = document.getElementById("SyncedFileCount");
            if(fc) fc.innerHTML = numberWithSpace(fc.innerHTML);

            s = document.getElementById("SyncedSize");
            if(s) s.innerHTML = numberWithSpace(s.innerHTML);

            /* Transfert */

            var td = document.getElementById("TransferSizeDown");
            if(td) td.innerHTML = numberWithSpace(td.innerHTML);

            var tu = document.getElementById("TransferSizeUp");
            if(tu) tu.innerHTML = numberWithSpace(tu.innerHTML);
          }
          //]]>
        </script>
      </head>
      <body>
        <h1 id="SynchronisationReport">
          <img style="float:left;" src="data:image/png;base64,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"/><span style="padding-left:20px"></span>Synchronization Technical Report (version <xsl:value-of select="dsdrive:synchro/report/@version"/>) ** <xsl:value-of select="dsdrive:synchro/report/date"/>
        </h1>
        <div class="content">
          <br/>
          <br/>
          <br/>
        </div>
        <xsl:choose>
          <xsl:when test="count(dsdrive:synchro/toc)!=0">
            <div class="content">
              <h2>Table Of Content</h2>
              <ul>
                <xsl:for-each select="dsdrive:synchro/toc/report">
                  <xsl:sort select="time" order="descending"/>
                  <xsl:variable name="reportname">
                    <xsl:value-of select="name"/>
                  </xsl:variable>
                  <li>
                    <!-- 20:09:01 - Remove 'target=blank' property to let the browser do its job... -->
                    <xsl:value-of select="format-number(@index, '00000')"/> - <a href="./{$reportname}"><xsl:value-of select="name"/></a><!--<xsl:value-of select="time"/>-->  (<xsl:value-of select="size"/> Bytes)
                  </li>
                </xsl:for-each>
              </ul>
            </div>
          </xsl:when>
          <xsl:otherwise>
            <div class="content">
              <h2>Information</h2>
              <xsl:if test="count(dsdrive:synchro/system/disk)!=0">
                <h3>System</h3>
                <table>
                  <tr>
                    <th>
                      <strong>Host Name</strong>
                    </th>
                    <td class="textCentered">
                      <xsl:value-of select="dsdrive:synchro/system/host/name"/>
                    </td>
                  </tr>
                </table><br/>
                <table>
                  <tr>
                    <th>
                      <strong>Disk Root</strong>
                    </th>
                    <th>
                      <strong>Disk Space</strong>
                    </th>
                    <th>
                      <strong>Free Disk Space</strong>
                    </th>
                  </tr>
                  <tr>
                    <td class="textCentered">
                      <xsl:value-of select="dsdrive:synchro/system/disk/root"/>
                    </td>
                    <td class="textCentered">
                      <xsl:value-of select="dsdrive:synchro/system/disk/bytes_total"/>
                    </td>
                    <td class="textCentered">
                      <xsl:value-of select="dsdrive:synchro/system/disk/bytes_free"/>
                    </td>
                  </tr>
                </table>
              </xsl:if>
              <h3>Product</h3>
              <table>
                <tr>
                  <th>
                    <strong>Build Date</strong>
                  </th>
                  <td>
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/build/date)!=0">
                        <xsl:value-of select="dsdrive:synchro/build/date"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
                <tr>
                  <th>
                    <strong>Build Level</strong>
                  </th>
                  <td>
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/build/level)!=0">
                        <xsl:value-of select="dsdrive:synchro/build/level"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
              </table>
              <h3>Cache Properties</h3>
              <table>
                <tr>
                  <th>
                    <strong>Location</strong>
                  </th>
                  <th>
                    <strong>Files Count</strong>
                  </th>
                  <th>
                    <strong>Directories Count</strong>
                  </th>
                  <th>
                    <strong>Size</strong>
                  </th>
                </tr>
                <tr>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties/path)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties/path"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="FileCount">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties/countfile)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties/countfile"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="DirectoryCount">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties/countdir)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties/countdir"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="Size">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties/size)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties/size"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
                <tr>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties_synced/path)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties_synced/path"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="SyncedFileCount">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties_synced/countfile)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties_synced/countfile"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="SyncedDirectoryCount">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties_synced/countdir)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties_synced/countdir"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="SyncedSize">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/properties_synced/size)!=0">
                        <xsl:value-of select="dsdrive:synchro/properties_synced/size"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
              </table>
              <h3>Configuration</h3>
              <table>
                <tr>
                  <th>
                    <strong>Session Identifier</strong>
                  </th>
                  <td id="sessionid">
                    <xsl:value-of select="dsdrive:synchro/conf/sessionid"/>
                  </td>
                </tr>
                <tr>
                  <th>
                    <strong>User Identifier</strong>
                  </th>
                  <td id="userid">
                    <xsl:value-of select="dsdrive:synchro/conf/userid"/>
                  </td>
                </tr>
                <tr>
                  <th>
                    <strong>Hostname Identifier</strong>
                  </th>
                  <td id="hostnameid">
                    <xsl:value-of select="dsdrive:synchro/conf/hostnameid"/>
                  </td>
                </tr>
                <tr>
                  <th>
                    <strong>Origin Path</strong>
                  </th>
                  <td id="originid">
                    <xsl:value-of select="dsdrive:synchro/conf/orgpath"/>
                  </td>
                </tr>
                <xsl:choose>
                  <xsl:when test="count(dsdrive:synchro/conf/tgtpath)!=0">
                    <tr>
                      <th>
                        <strong>Target Path</strong>
                      </th>
                      <td id="targetid">
                        <xsl:value-of select="dsdrive:synchro/conf/tgtpath"/>
                      </td>
                    </tr>
                  </xsl:when>
                  <xsl:when test="count(dsdrive:synchro/conf/platform)!=0">
                    <tr>
                      <th>
                        <strong>Server Management URL</strong>
                      </th>
                      <td>
                        <xsl:value-of select="dsdrive:synchro/conf/platform/appmgt"/>
                      </td>
                    </tr>
                    <tr>
                      <th>
                        <strong>Server App URL</strong>
                      </th>
                      <td>
                        <xsl:value-of select="dsdrive:synchro/conf/platform/myapps"/>
                      </td>
                    </tr>
                    <tr>
                      <th>
                        <strong>Server Drive URL</strong>
                      </th>
                      <td id="targetid">
                        <xsl:value-of select="dsdrive:synchro/conf/platform/driveurl"/>
                      </td>
                    </tr>
                    <tr>
                      <th>
                        <strong>Server Tenant ID</strong>
                      </th>
                      <td>
                        <xsl:value-of select="dsdrive:synchro/conf/platform/tenantid"/>
                      </td>
                    </tr>
                    <tr>
                      <th>
                        <strong>Server Tenant Name</strong>
                      </th>
                      <td>
                        <xsl:value-of select="dsdrive:synchro/conf/platform/tenantname"/>
                      </td>
                    </tr>
                    <tr>
                      <th>
                        <strong>Server Web Service Version</strong>
                      </th>
                      <td>
                        <xsl:value-of select="dsdrive:synchro/conf/platform/wsversion"/>
                      </td>
                    </tr>
                  </xsl:when>
                  <xsl:otherwise></xsl:otherwise>
                </xsl:choose>
<!--
                <tr>
                  <th>
                    <strong>Refresh Time (sec.)</strong>
                  </th>
                  <td>
                    <xsl:value-of select="dsdrive:synchro/conf/refresh"/>
                  </td>
                </tr>
-->
                <tr>
                  <th>
                    <strong>Mode</strong>
                  </th>
                  <td>
                    <xsl:value-of select="dsdrive:synchro/conf/mode"/>
                  </td>
                </tr>
<!--
              <tr>
                <th>
                  <strong>Keep Modified Files</strong>
                </th>
                <td>
                  <xsl:value-of select="dsdrive:synchro/conf/keepchg"/>
                </td>
              </tr>
-->
                <xsl:if test="count(dsdrive:synchro/conf/internalDS)!=0">
                  <tr>
                    <th>
                      <strong>Internal DS</strong>
                    </th>
                    <td id="internalDS">
                      <xsl:value-of select="dsdrive:synchro/conf/internalDS"/>
                    </td>
                  </tr>
                </xsl:if>
              </table>
            </div>
            <div class="content">
              <h2>Statistics</h2>
              <h3>Messages</h3>
              <table>
                <tr>
                  <th></th>
                  <th id="StepTableHeader">
                    <strong>Step</strong>
                  </th>
                  <th id="ErrorsTableHeader">
                    <strong>Errors</strong>
                  </th>
                  <th id="WarningsTableHeader">
                    <strong>Warnings</strong>
                  </th>
                  <th id="MessagesTableHeader">
                    <strong>Messages</strong>
                  </th>
                </tr>
                <xsl:for-each select="dsdrive:synchro/perf/step">
                  <xsl:variable name="stepname">
                    <xsl:value-of select="@name"/>
                  </xsl:variable>
                  <xsl:variable name="stepinfocount">
                    <xsl:value-of select="count(../../message/line[@step=$stepname and @type='info'])" />
                  </xsl:variable>
                  <xsl:variable name="stepwarningcount">
                    <xsl:value-of select="count(../../message/line[@step=$stepname and @type='warning'])" />
                  </xsl:variable>
                  <xsl:variable name="steperrorcount">
                    <xsl:value-of select="count(../../message/line[@step=$stepname and @type='error'])" />
                  </xsl:variable>
                  <tr>
                    <xsl:choose>
                      <xsl:when test="$steperrorcount!=0">
                        <td class="IconErrorEncoded" />
                      </xsl:when>
                      <xsl:when test="$stepwarningcount!=0">
                        <td class="IconWarningEncoded" />
                      </xsl:when>
                      <xsl:otherwise>
                        <td class="IconInfoEncoded" />
                      </xsl:otherwise>
                    </xsl:choose>
                    <td>
                      <strong>
                        <a href="#{$stepname}">
                          <span>
                            <xsl:value-of select="$stepname"/>
                          </span>
                        </a>
                      </strong>
                    </td>
                    <td class="textCentered">
                      <xsl:choose>
                        <xsl:when test="$steperrorcount!=0">
                          <strong>
                            <xsl:value-of select="$steperrorcount"/>
                          </strong>
                        </xsl:when>
                        <xsl:otherwise>
                          <xsl:value-of select="$steperrorcount"/>
                        </xsl:otherwise>
                      </xsl:choose>
                    </td>
                    <td class="textCentered">
                      <xsl:choose>
                        <xsl:when test="$stepwarningcount!=0">
                          <strong>
                            <xsl:value-of select="$stepwarningcount"/>
                          </strong>
                        </xsl:when>
                        <xsl:otherwise>
                          <xsl:value-of select="$stepwarningcount"/>
                        </xsl:otherwise>
                      </xsl:choose>
                    </td>
                    <td class="textCentered">
                      <xsl:choose>
                        <xsl:when test="$stepinfocount!=0">
                          <strong>
                            <xsl:value-of select="$stepinfocount"/>
                          </strong>
                        </xsl:when>
                        <xsl:otherwise>
                          <xsl:value-of select="$stepinfocount"/>
                        </xsl:otherwise>
                      </xsl:choose>
                    </td>
                  </tr>
                </xsl:for-each>
              </table>
              <h3>Files Operations</h3>
              <table>
                <tr>
                  <th>
                    <strong>New</strong>
                  </th>
                  <th>
                    <strong>Modified</strong>
                  </th>
                  <th>
                    <strong>Moved</strong>
                  </th>
                  <th>
                    <strong>Removed</strong>
                  </th>
                </tr>
                <tr>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_operation/new)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_operation/new"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_operation/modified)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_operation/modified"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_operation/moved)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_operation/moved"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_operation/removed)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_operation/removed"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
              </table>
              <h3>Transfert</h3>
              <table>
                <tr>
                  <th></th>
                  <th>
                    <strong>File Count</strong>
                  </th>
                  <th>
                    <strong>Total Size</strong>
                  </th>
                  <th>
                    <strong>Elapse Time (msec.)</strong>
                  </th>
                </tr>
                <tr>
                  <td>
                    <strong>Download</strong>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/down/files)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/down/files"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="TransferSizeDown">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/down/tsize)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/down/tsize"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/down/elapse)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/down/elapse"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
                <tr>
                  <td>
                    <strong>Upload</strong>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/up/files)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/up/files"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered" id="TransferSizeUp">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/up/tsize)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/up/tsize"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                  <td class="textCentered">
                    <xsl:choose>
                      <xsl:when test="count(dsdrive:synchro/stat_transfer/up/elapse)!=0">
                        <xsl:value-of select="dsdrive:synchro/stat_transfer/up/elapse"/>
                      </xsl:when>
                      <xsl:otherwise>N/A</xsl:otherwise>
                    </xsl:choose>
                  </td>
                </tr>
              </table>
              <h3>Performances</h3>
              <xsl:for-each select="dsdrive:synchro/perf/step">
                <xsl:variable name="stepname">
                  <xsl:value-of select="@name"/>
                </xsl:variable>
                <h4>
                  <xsl:value-of select="$stepname"/>
                </h4>
                <table>
                  <tr>
                    <th></th>
                    <th>
                      <strong>Hours</strong>
                    </th>
                    <th>
                      <strong>Minutes</strong>
                    </th>
                    <th>
                      <strong>Seconds</strong>
                    </th>
                    <th>
                      <strong>Milliseconds</strong>
                    </th>
                    <th>
                      <strong>Microseconds</strong>
                    </th>
                  </tr>
                  <tr>
                    <th>
                      <strong>Cpu</strong>
                    </th>
                    <td>
                      <xsl:value-of select="cpu/hour"/>
                    </td>
                    <td>
                      <xsl:value-of select="cpu/minute"/>
                    </td>
                    <td>
                      <xsl:value-of select="cpu/second"/>
                    </td>
                    <td>
                      <xsl:value-of select="cpu/millisecond"/>
                    </td>
                    <td>
                      <xsl:value-of select="cpu/microsecond"/>
                    </td>
                  </tr>
                  <tr>
                    <th>
                      <strong>Elapse</strong>
                    </th>
                    <td>
                      <xsl:value-of select="elp/hour"/>
                    </td>
                    <td>
                      <xsl:value-of select="elp/minute"/>
                    </td>
                    <td>
                      <xsl:value-of select="elp/second"/>
                    </td>
                    <td>
                      <xsl:value-of select="elp/millisecond"/>
                    </td>
                    <td>
                      <xsl:value-of select="elp/microsecond"/>
                    </td>
                  </tr>
                </table>
              </xsl:for-each>
            </div>
            <div class="content">
              <xsl:if test="count(dsdrive:synchro/message)!=0">
                <h2 id="MessageTitle">Messages</h2>
                <xsl:for-each select="dsdrive:synchro/perf/step">
                  <xsl:variable name="stepname">
                    <xsl:value-of select="@name"/>
                  </xsl:variable>
                  <a id="{$stepname}" onclick="toggle_visibility('{$stepname}');">
                    <h4>
                      <img alt="toggle" src="data:image/x-icon;base64,AAABAAEAEBAAAAEAIABoBAAAFgAAACgAAAAQAAAAIAAAAAEAIAAAAAAAAAQAAAAAAAAAAAAAAAAAAAAAAAD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8AAAAAMAAAADMAAAAzAAAAMwAAADMAAAAzAAAAMwAAADMAAAAj////AP///wD///8A////AP///wD///8A////AISEhPKEhYX/g4OE/4ODg/+Dg4P/g4OD/4ODhP+EhYX/e3t7wP///wD///8A////AP///wD///8A////AP///wCEhYX/xsLA/766uP++urj/vrq4/766uP++urj/xsLA/4SFhf////8A////AP///wD///8A////AP///wD///8Ag4OD/8TAvv+xrqz/sa6s//////+xrqz/sa6s/8TAvv+Dg4P/////AP///wD///8A////AP///wD///8A////AIKCg//FwcD/paKg/6Shn///////pKGf/6WioP/FwcD/goKD/////wD///8A////AP///wD///8A////AP///wCCgoL/xsTB////////////////////////////xsTB/4KCgv////8A////AP///wD///8A////AP///wD///8AgoKC/83Lyf+Wk5H/lpOR//////+Wk5H/lpOR/83Lyf+CgoL/////AP///wD///8A////AP///wD///8A////AIODg//Ny8n/k4+N/5SRj///////lJGP/5OPjf/Ny8n/g4OD/////wD///8A////AP///wD///8A////AP///wCEhIX/zcvJ/83Lyf/Ny8n/zcvJ/83Lyf/Ny8n/zcvJ/4SEhf////8A////AP///wD///8A////AP///wD///8AhoeH74WFhf+EhIT/hISE/4SEhP+EhIT/hISE/4WFhf+Gh4ew////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A////AP///wD///8A//8AAP//AAD//wAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAPAHAADwBwAA8AcAAP//AAD//wAA//8AAA==" id="{$stepname}toggleid"/>
                      <xsl:value-of select="$stepname"/>
                    </h4>
                  </a>
                  <div id="{$stepname}id" style="display:none;">
                    <table>
                      <tr>
                        <th></th>
                        <th>
                          <strong>Date</strong>
                        </th>
                        <th class="messageCell">
                          <strong>Message</strong>
                        </th>
                      </tr>
                      <xsl:for-each select="../../message/line">
                        <xsl:if test="@step=$stepname">
                          <tr>
                            <xsl:choose>
                              <xsl:when test="@type='error'">
                                <td class="IconErrorEncoded"></td>
                                <td class="textCenteredDate">
                                  <xsl:value-of select="@time"/>
                                </td>
                                <td class="messageCell">
                                  <span>
                                    <xsl:value-of select="."/>
                                  </span>
                                </td>
                              </xsl:when>
                              <xsl:when test="@type='warning'">
                                <td class="IconWarningEncoded"></td>
                                <td class="textCenteredDate">
                                  <xsl:value-of select="@time"/>
                                </td>
                                <td class="messageCell">
                                  <span>
                                    <xsl:value-of select="."/>
                                  </span>
                                </td>
                              </xsl:when>
                              <xsl:otherwise>
                                <td class="IconInfoEncoded"></td>
                                <td class="textCenteredDate">
                                  <xsl:value-of select="@time"/>
                                </td>
                                <td class="messageCell">
                                  <span>
                                    <xsl:value-of select="."/>
                                  </span>
                                </td>
                              </xsl:otherwise>
                            </xsl:choose>
                          </tr>
                        </xsl:if>
                      </xsl:for-each>
                    </table>
                  </div>
                </xsl:for-each>
              </xsl:if>
              <xsl:if test="count(dsdrive:synchro/log)!=0">
                <h2 id="LogTitle">Logs</h2>
                <table class="logCell">
                  <xsl:for-each select="dsdrive:synchro/log/line">
                    <tr class="logText">
                      <td>
                        <xsl:value-of select="@time"/>
                      </td>
                      <td>
                        <span>
                          <xsl:value-of select="."/>
                        </span>
                      </td>
                    </tr>
                  </xsl:for-each>
                </table>
              </xsl:if>
            </div>
            </xsl:otherwise>
        </xsl:choose>
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>
