<?xml version="1.0" encoding="UTF-8"?>
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">

    <xsl:output
      method="html"
      encoding="ISO-8859-1"
      doctype-public="-//W3C//DTD HTML 4.01//EN"
      doctype-system="http://www.w3.org/TR/html4/strict.dtd"
      indent="no" />

    <xsl:template match="REPORT">
        <html>
            <head>
                <title>Machining Data Check Report</title>
            </head>
            <body>
                <script language="JavaScript" type="text/javascript">
                    if (document.getElementById) {
                    document.writeln('<style type="text\/css">
                        <!--')
document.writeln('.details {display:none} @media print {.details {display:block;}}')
document.writeln('//-->
                    </style>') }

                    function expandList(numID)
                    {
                        if (document.getElementById(numID).style.display == "none") { document.getElementById(numID).style.display = "block" }
                        else { document.getElementById(numID).style.display = "none" }
                    }
                    
                    function displayDetails(sDetails)
                    {
                        var nWidth = 300;
                        var nHeight = screen.height / 2;
                        var nTop = 100;
                        var nLeft = screen.width - 600;
                        var sOptions = 'width=' + nWidth + ',height=' + nHeight + ',top=' + nTop + ',left=' + nLeft + ',scrollbars=yes,resizable=yes,modal=yes';
                        detailsPop = window.open('about:blank', 'Details', sOptions);
                        <![CDATA[ detailsPop.document.write(sDetails); ]]>
                        <![CDATA[ detailsPop.document.write('<br/><br/><a href="javascript:window.close();">Close</a>'); ]]>
                        detailsPop.window.focus();
                    }
                </script>

                <B> <font size="+3"> Machining Data Check Global Result </font> </B>

                <br/>
                <br/>
                <xsl:apply-templates select="OrganizationalRessource_KO">
                    <xsl:with-param name="count" select="1"/>
                </xsl:apply-templates>
                <br/>
                <xsl:apply-templates select="OrganizationalRessource_OK">
                    <xsl:with-param name="count" select="2"/>
                </xsl:apply-templates>
                <!--<br/>
                <xsl:apply-templates select="OrganizationalRessource_NoMachining" />-->
                <br/>
                <xsl:apply-templates select="OrganizationalRessource_CheckFailed" />
                <br/>

            </body>
        </html>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->
    
    <xsl:template match="OrganizationalRessource_KO">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>
        
        <table>
            <tr>
                <td bgcolor="#FFC7CE">
                    <div onClick="expandList('MC_KO')" style="cursor:hand; cursor:pointer;">
                        <b > <font size="+1"> Machining Cell KO</font>  </b> (click to collapse/expand)
                    </div>

                </td>
            </tr>
        </table>
        <div id="MC_KO" class="details">
            <table border="2" cellspacing="0">
                <tr>
                    <th> Machining Cell </th>
                    <th> NC Machine </th>
                    <th> PPRContext opened </th>
                    <th> Status </th>
                    <th> Check Date </th>
                    <th> Last Modification </th>
                    <th> Machining Activities </th>
                    <th> Cutting Ressources </th>
                </tr>
                <xsl:apply-templates select="MC" >
                    <xsl:with-param name="count" select="$count*10 + $countlocal" />
                </xsl:apply-templates>
            </table>
            </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="OrganizationalRessource_OK">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>

        <table>
            <tr>
                <td bgcolor="#C6EFCE">
                    <div onClick="expandList('MC_0K')" style="cursor:hand; cursor:pointer">
                        <b > <font size="+1"> Machining Cell OK </font>  </b> (click to collapse/expand)
                    </div>
                </td>
            </tr>
        </table>
        <div id="MC_0K" class="details" style="display:none;">
            <table border="2" cellspacing="0">
                <tr>
                    <th> Machining Cell </th>
                    <th> NC Machine </th>
                    <th> PPRContext opened </th>
                    <th> Status </th>
                    <th> Check Date </th>
                    <th> Last Modification </th>
                    <th> Machining Activities </th>
                    <th> Cutting Ressources </th>
                </tr>
                <xsl:apply-templates select="MC" >
                    <xsl:with-param name="count" select="$count*10 + $countlocal" />
                </xsl:apply-templates>
            </table>
        </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="OrganizationalRessource_NoMachining">
        <table>
            <tr>
                <td>
                    <div onClick="expandList('noMC')" style="cursor:hand; cursor:pointer">
                        <b > <font size="+1"> Organizational Ressource not Machining </font> </b> (click to collapse/expand)
                    </div>
                </td>
            </tr>
        </table>
        <div id="noMC" class="details" style="display:none;">
            <table border="2" cellspacing="0">
                <tr>
                    <th>
                        Organizational Ressource
                    </th>
                    <th>
                        Status
                    </th>
                </tr>
                <xsl:apply-templates select="OrganizationalRessource" />
            </table>
        </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="OrganizationalRessource_CheckFailed">
        <table>
            <tr>
                <td bgcolor="#FFEB9C">
                    <div onClick="expandList('Failed')" style="cursor:hand; cursor:pointer">
                        <b> <font size="+1"> Organizational Ressource no checked yet </font></b> (click to collapse/expand)
                    </div>
                </td>
            </tr>
        </table>
        <div id="Failed" class="details" style="display:none;">
            <table border="2" cellspacing="0">
                <tr>
                    <th>
                        Organizational Ressource
                    </th>   
                    <th>
                        Status
                    </th>
                </tr>
                <xsl:apply-templates select="OrganizationalRessource" />
            </table>
        </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="MC">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>
        
        <tr valign="top">
            <td colspan="8"/>
        </tr>

        <tr valign="top">
            <td>
                <xsl:value-of select="@PLM_ExternalID"/>
            </td>
            <td>
                <xsl:value-of select="@Machine"/>
            </td>
            <td colspan="6">
            </td>
        </tr>

        <xsl:apply-templates select="Open_PPR" >
            <xsl:with-param name="count" select="$count*10 + $countlocal" />
        </xsl:apply-templates>
        <xsl:apply-templates select="Open_MC" >
            <xsl:with-param name="count" select="$count*20 + $countlocal" />
        </xsl:apply-templates>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="Open_PPR[@Result='Machining data empty']">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>

        <tr valign="top">
            <td colspan="2">
            </td>
            <td>
                <xsl:value-of select="@PLM_ExternalID"/>
            </td>
            <td bgcolor="#FFC7CE">
                <xsl:value-of select="@Result"/>
            </td>
            <td>
                <xsl:value-of select="@CheckDate"/>
            </td>
            <td>
                <xsl:value-of select="@LastModification"/>
            </td>
            <td colspan="2">
            </td>
        </tr>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="Open_PPR[@Result='Machining data OK']">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>
        
        <tr valign="top">
            <td colspan="2"/>
            <td>
                <xsl:value-of select="@PLM_ExternalID"/>
            </td>
            <td bgcolor="#C6EFCE">
                    <xsl:value-of select="@Result"/>
            </td>
            <td>
                <xsl:value-of select="@CheckDate"/>
            </td>
            <td>
                <xsl:value-of select="@LastModification"/>
            </td>
            <td>
                <xsl:apply-templates select="MfgData_Ope">
                    <xsl:with-param name="count" select="$count*10 + $countlocal" />
                </xsl:apply-templates>
            </td>
            <td>
                <xsl:apply-templates select="MfgData_Tool" >
                    <xsl:with-param name="count" select="$count*20 + $countlocal" />
                </xsl:apply-templates>
            </td>
        </tr>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="Open_MC[@Result='Machining data empty']">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>

        <tr valign="top">
            <td colspan="2"/>
            <td>
                <i>Machining cell only</i>
            </td>
            <td bgcolor="#FFC7CE">
                <xsl:value-of select="@Result"/>
            </td>
            <td>
                <xsl:value-of select="@CheckDate"/>
            </td>
            <td>
                <xsl:value-of select="@LastModification"/>
            </td>
            <td colspan="2"/>
        </tr>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="Open_MC[@Result='Machining data OK']">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>
        
        <tr valign="top">
            <td colspan="2"/>
            <td>
                <i>Machining cell only</i>
            </td>
            <td bgcolor="#C6EFCE">
                    <xsl:value-of select="@Result"/>
            </td>
            <td>
                <xsl:value-of select="@CheckDate"/>
            </td>
            <td>
                <xsl:value-of select="@LastModification"/>
            </td>
            <td>
                <xsl:apply-templates select="MfgData_Ope">
                    <xsl:with-param name="count" select="$count*10 + $countlocal" />
                </xsl:apply-templates>
            </td>
            <td>
                <xsl:apply-templates select="MfgData_Tool" >
                    <xsl:with-param name="count" select="$count*20 + $countlocal" />
                </xsl:apply-templates>
            </td>
        </tr>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="MfgData_Ope">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>

        <div onClick="expandList('ope-{$count*10 + $countlocal}')" style="cursor:hand; cursor:pointer;">
            <xsl:value-of select="@NbOpe"/>
            <font size="-1">  (click for details)</font>
        </div>
        <div id="ope-{$count*10 + $countlocal}" class="details" style="display:none;">
            <font size="-1">
                <pre>
                <xsl:value-of select="."/>
                </pre>
            </font>
        </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="MfgData_Tool">
        <xsl:param name="count"/>
        <xsl:variable name="countlocal">
            <xsl:number/>
        </xsl:variable>
        
        <div onClick="expandList('tool{$count*10 + $countlocal}')" style="cursor:hand; cursor:pointer;">
            <xsl:value-of select="@NbTool"/>
            <font size="-1">  (click for details)</font>
        </div>
        <div id="tool{$count*10 + $countlocal}" class="details" style="display:none;">
            <font size="-1">
                <pre>
                    <xsl:value-of select="."/>
                </pre>
            </font>
        </div>
    </xsl:template>

    <!--________________________________________________________________________________________________________________-->

    <xsl:template match="OrganizationalRessource">
        <tr valign="top">
            <td>
                <xsl:value-of select="@PLM_ExternalID"/>
            </td>
            <td>
                <xsl:value-of select="@Result"/>
            </td>
        </tr>
    </xsl:template>
    
</xsl:stylesheet>

