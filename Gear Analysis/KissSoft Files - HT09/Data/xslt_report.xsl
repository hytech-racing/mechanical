<?xml version="1.0" encoding="ISO-8859-1"?>
<!-- Edited by XMLSpy® -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:template match="/">
    <html>
      <body>

        <h2>Report Information</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>report ID</th>
            <th>creation date</th>
            <th>scenario 3DXml</th>
          </tr>
          <xsl:for-each select="allerrors">
            <tr>
              <td>
                <xsl:value-of select="report/reportID"/>
              </td>
              <td>
                <xsl:value-of select="report/creationdate"/>
              </td>
              <td>
                <xsl:value-of select="scenario"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <h2>Build Information</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Build Date Detail</th>
            <th>Internal Build</th>
            <th>Version</th>
            <th>Release</th>
            <th>Service Pack</th>
            <th>Hot Fix</th>
          </tr>
          <xsl:for-each select="allerrors/buildinformation">
            <tr>
              <td>
                <xsl:value-of select="BuildDateDetail"/>
              </td>
              <td>
                <xsl:value-of select="InternalBuild"/>
              </td>
              <td>
                <xsl:value-of select="Version"/>
              </td>
              <td>
                <xsl:value-of select="Release"/>
              </td>
              <td>
                <xsl:value-of select="ServicePack"/>
              </td>
              <td>
                <xsl:value-of select="HotFix"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <h2>File Information</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>file name</th>
            <th>file format</th>
          </tr>
          <xsl:for-each select="allerrors/fileinformation">
            <tr>
              <td>
                <xsl:value-of select="filename"/>
              </td>
              <td>
                <xsl:value-of select="fileformat"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

        <h2>List of errors</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Error severity</th>
            <th>Error message</th>
            <th>Error catalog</th>
          </tr>
          <xsl:for-each select="allerrors/error">
            <tr>
              <td>
                <xsl:value-of select="severity"/>
              </td>
              
              
              <xsl:if test="requestMsgId">
                <td>
                  <xsl:value-of select="requestMsgId"/>
                  <br/>
                  <xsl:value-of select="msgId"/>
                </td>
              </xsl:if>

              <xsl:if test="not(requestMsgId)">
              <td>
                <xsl:value-of select="msgId"/>
              </td>
              </xsl:if>
              
              
              <td>
                <xsl:value-of select="catalog"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>

      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>

