<?xml version="1.0" encoding="ISO-8859-1"?>
<!-- Edited by XMLSpy® -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

  <xsl:template match="/">
    <html>
      <body>
        <h2>Node Structure</h2>
        <table border="0">
        <xsl:for-each select="allnodes/line">
          <tr>
            <td>
              <pre><xsl:value-of select="."/></pre>
            </td>
          </tr>

        </xsl:for-each>
        </table>
          
        <!--<table border="1">
          <tr bgcolor="#9acd32">
            <th>Record Local ID</th>
            <th>Record Core Type</th>
            <th>Record Domain</th>
            <th>Record Business Domain</th>
          </tr>
          <xsl:for-each select="allrecords/RecordDeclaration">
            <tr>
              <td>
                <xsl:value-of select="id"/>
              </td>
              <td>
                <xsl:value-of select="coretype"/>
              </td>
              <td>
                <xsl:value-of select="domain"/>
              </td>
              <td>
                <xsl:value-of select="businessdomain"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>
        <h2>List of dependancies owned by all Records</h2>
        <table border="1">
          <tr bgcolor="#9acd32">
            <th>Record Local ID</th>
            <th>Link To</th>
            <th>Link Type</th>
          </tr>
          <xsl:for-each select="allrecords/RecordDependancy">
            <tr>
              <td>
                <xsl:value-of select="RecordLocalID"/>
              </td>
              <td>
                <xsl:value-of select="RecordLinkTo"/>
              </td>
              <td>
                <xsl:value-of select="RecordLinkType"/>
              </td>
            </tr>
          </xsl:for-each>
        </table>-->
      </body>
    </html>
  </xsl:template>
</xsl:stylesheet>

