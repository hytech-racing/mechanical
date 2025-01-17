<?xml version="1.0" encoding="utf-8"?>
<!-- DELMIA 2015 -->
<xsl:stylesheet version="1.0" xmlns:xsl="http://www.w3.org/1999/XSL/Transform">
  <xsl:output method="html" version="4.0" encoding="UTF-16" indent="yes"/>

  <xsl:template name="SYSTEMRECURSION">
    <xsl:param name="count" />
    <xsl:if test="$count > 0">

      <table width="100%" cellpadding="5" class="headerborder" style="margin-bottom:1em;table-layout:auto;" xmlns="">
        <col width="10%"/>
        <col width="35%"/>
        <col width="55%"/>
        <thead style="display:table-header-group">
          <tr align="center" valign="middle" style="font-size:larger; background-color:lightgrey; border-color:#000000; border-style:solid; border-width:1px;">
            <th>
              <img alt="TALogo" width="150" height="75" src=".\PPRCommon_3DS_Logo.png" align="middle"/>
            </th>
            <th>
              <b>Time Analysis Report</b>
            </th>
            <th>
              <b>
                System Name:<xsl:value-of select="@NAME"/>
                <div> </div>
                System Path: <xsl:value-of select="@Path"/>

              </b>
            </th>
          </tr>
        </thead>
      </table>

      <xsl:for-each select="OPERATION">
        <table width="100%" cellpadding="5" class="headerborder" style="margin-bottom:1em;table-layout:auto;" xmlns="">
          <thead style="display:table-header-group">
            <tr>
              <td>
                <table cellpadding="1" border="0" width="100%" style="margin-bottom:0.25em;table-layout:auto">
                  <td align="left" style="background-color:lightgrey">
                    <img alt="Info" width="40" height="30" src=".\I_DELSTTStopWatch108x144.png" align="center"/>
                    <b>
                      <xsl:value-of select="@NAME"/>
                    </b>
                  </td>
                </table>
                
                <xsl:for-each select="TIMEANALYSIS/TAPROPERTIES">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:center">Analysis</th>
                      <th style="text-align:center">Subsystem</th>
                      <th style="text-align:center">AnalyzedTime</th>
                      <th style="text-align:center">AnalyzedTime[inTMU]</th>
                      <th style="text-align:center">TimeType</th>
                      <th style="text-align:center">AnalysisType Unit</th>
                      <th style="text-align:center">BasicTime Unit</th>
                      <th style="text-align:center">AddedPercentage</th>
                    </tr>

                    <tr>
                      <td style="text-align:center">
                        <xsl:value-of select="NAME"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="SUBSYSTEM"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="ANALYZEDTIME"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="ANALYZEDTIMEINTMU"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="TIMETYPE"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="ANALYSISTYPE"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="BASICTIME"/>
                      </td>
                      <td style="text-align:center">
                        <xsl:value-of select="ADDEDPERCENTAGE"/>
                      </td>
                    </tr>
                  </table>
                </xsl:for-each>
               

                <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='UAS'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='STD'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MEK']">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:left">RowNo</th>
                      <th style="text-align:left">Description</th>
                      <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                        <th style="text-align:left">LocalDescription</th>
                      </xsl:if>
                      <th style="text-align:left">H</th>
                      <th style="text-align:left">P</th>
                      <th style="text-align:left">D</th>
                      <th style="text-align:left">Code</th>
                      <th style="text-align:left">Time</th>
                      <th style="text-align:left">TimeType</th>
                      <th style="text-align:left">Frequency</th>
                      <th style="text-align:left">TotalTime</th>
                      <th style="text-align:left">SetupTime</th>
                      <th style="text-align:left">ValueAdded</th>
                    </tr>
                    <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                      <tr>
                        <td>
                          <xsl:value-of select="RowNo"/>
                        </td>
                        <td>
                          <xsl:value-of select="Description"/>
                        </td>
                        
                          <xsl:if test="LocalDescription">
                            <td >                              
                                <xsl:value-of select="LocalDescription"/>                             
                            </td>
                          </xsl:if>
                        
                        <td>
                          <xsl:value-of select="H"/>
                        </td>
                        <td>
                          <xsl:value-of select="P"/>
                        </td>
                        <td>
                          <xsl:value-of select="D"/>
                        </td>
                        <td>
                          <xsl:value-of select="Code"/>
                        </td>
                        <td>
                          <xsl:value-of select="Time"/>
                        </td>
                        <td>
                          <xsl:value-of select="TimeType"/>
                        </td>
                        <td>
                          <xsl:value-of select="Frequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="TotalTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="SetupTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="ValueAdded"/>
                        </td>
                      </tr>
                    </xsl:for-each>
                  </table>
                </xsl:if>

                <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MaxiMOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MiniMOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='SAM']">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:left">RowNo</th>
                      <th style="text-align:left">Description</th>
                      <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                        <th style="text-align:left">LocalDescription</th>
                      </xsl:if>
                      <th style="text-align:left">Code</th>
                      <th style="text-align:left">Time</th>
                      <th style="text-align:left">Frequency</th>
                      <th style="text-align:left">TotalTime</th>
                      <th style="text-align:left">SetupTime</th>
                      <th style="text-align:left">ValueAdded</th>
                    </tr>
                    <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                      <tr>
                        <td>
                          <xsl:value-of select="RowNo"/>
                        </td>
                        <td>
                          <xsl:value-of select="Description"/>
                        </td>
                        
                          <xsl:if test="LocalDescription">
                            <td>
                              <xsl:value-of select="LocalDescription"/>
                            </td>
                          </xsl:if>
                        
                        <td>
                          <xsl:value-of select="Code"/>
                        </td>
                        <td>
                          <xsl:value-of select="Time"/>
                        </td>
                        <td>
                          <xsl:value-of select="Frequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="TotalTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="SetupTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="ValueAdded"/>
                        </td>
                      </tr>
                    </xsl:for-each>
                  </table>
                </xsl:if>

                <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='RWF'">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:left">RowNo</th>
                      <th style="text-align:left">Description</th>
                      <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                        <th style="text-align:left">LocalDescription</th>
                      </xsl:if>
                      <th style="text-align:left">CodeL.H</th>
                      <th style="text-align:left">Time</th>
                      <th style="text-align:left">TotalTime</th>
                      <th style="text-align:left">S</th>
                      <th style="text-align:left">Time</th>
                      <th style="text-align:left">CodeR.H</th>
                      <th style="text-align:left">Description</th>
                      <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                        <th style="text-align:left">LocalDescription</th>
                      </xsl:if>
                      <th style="text-align:left">SetupTime</th>

                    </tr>
                    <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                      <tr>
                        <td>
                          <xsl:value-of select="RowNo"/>
                        </td>
                        <td>
                          <xsl:value-of select="Description"/>
                        </td>
                        
                          <xsl:if test="LocalDescription">
                            <td>
                              <xsl:value-of select="LocalDescription"/>
                            </td>
                          </xsl:if>
                        
                        <td>
                          <xsl:value-of select="Code"/>
                        </td>
                        <td>
                          <xsl:value-of select="Time"/>
                        </td>
                        <td>
                          <xsl:value-of select="TotalTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="S"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHCode"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHDescription"/>
                        </td>
                        
                        <xsl:if test="OHLocalDescription">
                          <td>
                            <xsl:value-of select="OHLocalDescription"/>
                          </td>
                        </xsl:if>
                        
                        <td>
                          <xsl:value-of select="SetupTime"/>
                        </td>
                      </tr>
                    </xsl:for-each>
                  </table>
                </xsl:if>

                <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MTM1'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MTM2']">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:left">RowNo</th>
                      <th style="text-align:left">Description</th>
                    
                        <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                          <th style="text-align:left">LocalDescription</th>
                        </xsl:if>
                     
                      <th style="text-align:left">Frequency</th>
                      <th style="text-align:left">M</th>
                      <th style="text-align:left">CodeL.H</th>
                      <th style="text-align:left">Time</th>
                      <th style="text-align:left">SetupTime</th>
                      <th style="text-align:left">CodeR.H</th>
                      <th style="text-align:left">M</th>
                      <th style="text-align:left">Frequency</th>
                      <th style="text-align:left">Description</th>
                        <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                          <th style="text-align:left">LocalDescription</th>
                        </xsl:if>
					            <th style="text-align:left">ValueAdded</th>
                    </tr>
                    <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                      <tr>
                        <td>
                          <xsl:value-of select="RowNo"/>
                        </td>
                        <td>
                          <xsl:value-of select="Description"/>
                        </td>

                        <xsl:if test="LocalDescription">
                          <td  >
                            <xsl:value-of select="LocalDescription"/>
                          </td>
                        </xsl:if>
                        
                        <td>
                          <xsl:value-of select="Frequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="M"/>
                        </td>
                        <td>
                          <xsl:value-of select="Code"/>
                        </td>
                        <td>
                          <xsl:value-of select="TotalTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="SetupTime"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHCode"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHM"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHFrequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHDescription"/>
                        </td>

                        <xsl:if test="OHLocalDescription">
                          <td >
                            <xsl:value-of select="OHLocalDescription"/>
                          </td>
                        </xsl:if>
						            <td>
                          <xsl:value-of select="ValueAdded"/>
                        </td>
                        
                      </tr>
                    </xsl:for-each>
                  </table>
                </xsl:if>
                
              <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MODAPTS']">
                  <table border="1" width="100%">
                    <tr bgcolor="#D8D8D8">
                      <th style="text-align:left">RowNo</th>
                      <th style="text-align:left">Description</th>
                    
                        <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                          <th style="text-align:left">LocalDescription</th>
                        </xsl:if>
                     
                      <th style="text-align:left">Frequency</th>                      
                      <th style="text-align:left">CodeL.H</th>
                      <th style="text-align:left">Time</th>                      
                      <th style="text-align:left">CodeR.H</th>                      
                      <th style="text-align:left">Frequency</th>
                      <th style="text-align:left">Description</th>
                        <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                          <th style="text-align:left">LocalDescription</th>
                        </xsl:if>
					            <th style="text-align:left">ValueAdded</th>
                    </tr>
                    <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                      <tr>
                        <td>
                          <xsl:value-of select="RowNo"/>
                        </td>
                        <td>
                          <xsl:value-of select="Description"/>
                        </td>

                        <xsl:if test="LocalDescription">
                          <td  >
                            <xsl:value-of select="LocalDescription"/>
                          </td>
                        </xsl:if>
                        
                        <td>
                          <xsl:value-of select="Frequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="Code"/>
                        </td>
                        <td>
                          <xsl:value-of select="TotalTime"/>
                        </td>                        
                        <td>
                          <xsl:value-of select="OHCode"/>
                        </td>                        
                        <td>
                          <xsl:value-of select="OHFrequency"/>
                        </td>
                        <td>
                          <xsl:value-of select="OHDescription"/>
                        </td>

                        <xsl:if test="OHLocalDescription">
                          <td >
                            <xsl:value-of select="OHLocalDescription"/>
                          </td>
                        </xsl:if>
						            <td>
                          <xsl:value-of select="ValueAdded"/>
                        </td>
                        
                      </tr>
                    </xsl:for-each>
                  </table>
                </xsl:if>

              </td>
            </tr>
          </thead>
        </table>
      </xsl:for-each>

      <xsl:for-each select="SYSTEM">
        <xsl:call-template name="SYSTEMRECURSION">
          <xsl:with-param name="count" select="$count - 1"/>
        </xsl:call-template>
      </xsl:for-each>

    </xsl:if>
  </xsl:template>


  <xsl:template match="/">
    <html xmlns="http://www.w3.org/1999/xhtml">
      <head>
        <meta http-equiv="content-type" content="text/html; charset=UTF-16"/>
        <!-- Page formatting -->
        <style>
          .fontred { color:red }
          * { font-size:16px }
          .fontsmaller { font-size:smaller }
          .headerborder { border:solid 1px black; }
          .headerborder th { border:solid 1px black; }
          .TA_Page:before {
          content: ' ';
          background-image: url('PPRCommon_3DS_Logo_Name.png');
          width: 100%;
          height: 100%;
          background-size: contain;
          position: fixed;
          opacity:0.1;
          }
        </style>
      </head>


      <body> <div class="TA_Page">
        <table width="100%" cellpadding="5"  class="headerborder" style="margin-bottom:1em;table-layout:auto;" xmlns="">

          <thead style="display:table-header-group">
            <tr>
              <td>

                <xsl:for-each select="PRINTREPORT/SYSTEM">

                  <table width="100%" cellpadding="5" class="headerborder" style="margin-bottom:1em;table-layout:auto;" xmlns="">
                    <col width="10%"/>
                    <col width="35%"/>
                    <col width="55%"/>
                    <thead style="display:table-header-group">
                      <tr align="center" valign="middle" style="font-size:larger; background-color:lightgrey; border-color:#000000; border-style:solid; border-width:1px;">
                        <th>
                          <img alt="TALogo" width="150" height="75" src=".\PPRCommon_3DS_Logo.png" align="middle"/>
                        </th>
                        <th>
                          <b>Time Analysis Report</b>
                        </th>
                        <th>
                          <b>
                            System Name:<xsl:value-of select="@NAME"/>
                            <div> </div>
                            System Path: <xsl:value-of select="@Path"/>
                          </b>
                        </th>
                      </tr>
                    </thead>
                  </table>

                  <xsl:for-each select="OPERATION">

                    <table width="100%" cellpadding="5" class="headerborder" style="margin-bottom:1em;table-layout:auto;" xmlns="">
                      <thead style="display:table-header-group">
                        <tr>
                          <td>
                            <table cellpadding="1" border="0" width="100%" style="margin-bottom:0.25em;table-layout:auto">
                              <td align="left" style="background-color:lightgrey">
                                <img alt="Info" width="40" height="30" src=".\I_DELSTTStopWatch108x144.png" align="center"/>
                                <b>
                                  <xsl:value-of select="@NAME"/>
                                </b>
                              </td>
                            </table>

                            <xsl:for-each select="TIMEANALYSIS/TAPROPERTIES">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:center">Analysis</th>
                                  <th style="text-align:center">Subsystem</th>
                                  <th style="text-align:center">AnalyzedTime</th>
                                  <th style="text-align:center">AnalyzedTime[inTMU]</th>
                                  <th style="text-align:center">TimeType</th>
                                  <th style="text-align:center">AnalysisType Unit</th>
                                  <th style="text-align:center">BasicTime Unit</th>
                                  <th style="text-align:center">AddedPercentage</th>
                                </tr>

                                <tr>
                                  <td style="text-align:center">
                                    <xsl:value-of select="NAME"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="SUBSYSTEM"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="ANALYZEDTIME"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="ANALYZEDTIMEINTMU"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="TIMETYPE"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="ANALYSISTYPE"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="BASICTIME"/>
                                  </td>
                                  <td style="text-align:center">
                                    <xsl:value-of select="ADDEDPERCENTAGE"/>
                                  </td>
                                </tr>
                              </table>
                            </xsl:for-each>
                            
                            <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='UAS'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='STD'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MEK']">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:left">RowNo</th>
                                  <th style="text-align:left">Description</th>

                                  <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                      <th style="text-align:left">LocalDescription</th>
                                    </xsl:if>
                                  
                                  <th style="text-align:left">H</th>
                                  <th style="text-align:left">P</th>
                                  <th style="text-align:left">D</th>
                                  <th style="text-align:left">Code</th>
                                  <th style="text-align:left">Time</th>
                                  <th style="text-align:left">TimeType</th>
                                  <th style="text-align:left">Frequency</th>
                                  <th style="text-align:left">TotalTime</th>
                                  <th style="text-align:left">SetupTime</th>
                                  <th style="text-align:left">ValueAdded</th>
                                </tr>
                                <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                                  <tr>
                                    <td>
                                      <xsl:value-of select="RowNo"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Description"/>
                                    </td>

                                    <xsl:if test="LocalDescription">
                                      <td>
                                        <xsl:value-of select="LocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="H"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="P"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="D"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Code"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Time"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TimeType"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Frequency"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TotalTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="SetupTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="ValueAdded"/>
                                    </td>
                                  </tr>
                                </xsl:for-each>
                              </table>
                            </xsl:if>

                            <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MaxiMOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='MiniMOST' or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='SAM']">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:left">RowNo</th>
                                  <th style="text-align:left">Description</th>
                                  <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                    <th style="text-align:left">LocalDescription</th>
                                  </xsl:if>
                                  <th style="text-align:left">Code</th>
                                  <th style="text-align:left">Time</th>
                                  <th style="text-align:left">Frequency</th>
                                  <th style="text-align:left">TotalTime</th>
                                  <th style="text-align:left">SetupTime</th>
                                  <th style="text-align:left">ValueAdded</th>
                                </tr>
                                <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                                  <tr>
                                    <td>
                                      <xsl:value-of select="RowNo"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Description"/>
                                    </td>

                                    <xsl:if test="LocalDescription">
                                      <td>
                                        <xsl:value-of select="LocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="Code"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Time"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Frequency"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TotalTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="SetupTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="ValueAdded"/>
                                    </td>
                                  </tr>
                                </xsl:for-each>
                              </table>
                            </xsl:if>

                            <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM='RWF'">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:left">RowNo</th>
                                  <th style="text-align:left">Description</th>
                                  <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                    <th style="text-align:left">LocalDescription</th>
                                  </xsl:if>
                                  <th style="text-align:left">CodeL.H</th>
                                  <th style="text-align:left">Time</th>
                                  <th style="text-align:left">TotalTime</th>
                                  <th style="text-align:left">S</th>
                                  <th style="text-align:left">Time</th>
                                  <th style="text-align:left">CodeR.H</th>
                                  <th style="text-align:left">Description</th>
                                  <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                    <th style="text-align:left">LocalDescription</th>
                                  </xsl:if>
                                  <th style="text-align:left">SetupTime</th>

                                </tr>
                                <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                                  <tr>
                                    <td>
                                      <xsl:value-of select="RowNo"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Description"/>
                                    </td>

                                    <xsl:if test="LocalDescription">
                                      <td>
                                        <xsl:value-of select="LocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="Code"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Time"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TotalTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="S"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHCode"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHDescription"/>
                                    </td>

                                    <xsl:if test="OHLocalDescription">
                                      <td>
                                        <xsl:value-of select="OHLocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="SetupTime"/>
                                    </td>
                                  </tr>
                                </xsl:for-each>
                              </table>
                            </xsl:if>

                            <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MTM1'] or TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MTM2']">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:left">RowNo</th>
                                  <th style="text-align:left">Description</th>
                                    <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                      <th style="text-align:left">LocalDescription</th>
                                    </xsl:if>
                                  <th style="text-align:left">Frequency</th>
                                  <th style="text-align:left">M</th>
                                  <th style="text-align:left">CodeL.H</th>
                                  <th style="text-align:left">Time</th>
                                  <th style="text-align:left">SetupTime</th>
                                  <th style="text-align:left">CodeR.H</th>
                                  <th style="text-align:left">M</th>
                                  <th style="text-align:left">Frequency</th>
                                  <th style="text-align:left">Description</th>
                                  
                                    <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                      <th style="text-align:left">LocalDescription</th>
                                    </xsl:if>
								                  <th style="text-align:left">ValueAdded</th>
                                  
                                </tr>
                                <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                                  <tr>
                                    <td>
                                      <xsl:value-of select="RowNo"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Description"/>
                                    </td>

                                    <xsl:if test="LocalDescription">
                                      <td>
                                        <xsl:value-of select="LocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="Frequency"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="M"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Code"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TotalTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="SetupTime"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHCode"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHM"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHFrequency"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHDescription"/>
                                    </td>

                                    <xsl:if test="OHLocalDescription">
                                      <td>
                                        <xsl:value-of select="OHLocalDescription"/>
                                      </td>
                                    </xsl:if>
									                  <td>
                                      <xsl:value-of select="ValueAdded"/>
                                    </td>
                                    
                                  </tr>
                                </xsl:for-each>
                              </table>
                            </xsl:if>
                            
                          <xsl:if test="TIMEANALYSIS/TAPROPERTIES/SUBSYSTEM[text()='MODAPTS']">
                              <table border="1" width="100%">
                                <tr bgcolor="#D8D8D8">
                                  <th style="text-align:left">RowNo</th>
                                  <th style="text-align:left">Description</th>
                                    <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                      <th style="text-align:left">LocalDescription</th>
                                    </xsl:if>
                                  <th style="text-align:left">Frequency</th>                                  
                                  <th style="text-align:left">CodeL.H</th>
                                  <th style="text-align:left">Time</th>                                  
                                  <th style="text-align:left">CodeR.H</th>                                  
                                  <th style="text-align:left">Frequency</th>
                                  <th style="text-align:left">Description</th>
                                  
                                    <xsl:if test="TIMEANALYSIS/TALINESDETAILS/LocalDescription">
                                      <th style="text-align:left">LocalDescription</th>
                                    </xsl:if>
								                  <th style="text-align:left">ValueAdded</th>
                                  
                                </tr>
                                <xsl:for-each select="TIMEANALYSIS/TALINESDETAILS">
                                  <tr>
                                    <td>
                                      <xsl:value-of select="RowNo"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="Description"/>
                                    </td>

                                    <xsl:if test="LocalDescription">
                                      <td>
                                        <xsl:value-of select="LocalDescription"/>
                                      </td>
                                    </xsl:if>
                                    
                                    <td>
                                      <xsl:value-of select="Frequency"/>
                                    </td>                                    
                                    <td>
                                      <xsl:value-of select="Code"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="TotalTime"/>
                                    </td>                                    
                                    <td>
                                      <xsl:value-of select="OHCode"/>
                                    </td>                                    
                                    <td>
                                      <xsl:value-of select="OHFrequency"/>
                                    </td>
                                    <td>
                                      <xsl:value-of select="OHDescription"/>
                                    </td>

                                    <xsl:if test="OHLocalDescription">
                                      <td>
                                        <xsl:value-of select="OHLocalDescription"/>
                                      </td>
                                    </xsl:if>
									                  <td>
                                      <xsl:value-of select="ValueAdded"/>
                                    </td>
                                    
                                  </tr>
                                </xsl:for-each>
                              </table>
                            </xsl:if>

                          </td>
                        </tr>
                      </thead>
                    </table>
                  </xsl:for-each>

                  <xsl:for-each select="SYSTEM">
                    <xsl:call-template name="SYSTEMRECURSION">
                      <xsl:with-param name="count" select="10"/>
                    </xsl:call-template>
                  </xsl:for-each>
                </xsl:for-each>

              </td>
            </tr>

          </thead>
        </table>
        </div>
      </body>
    </html>

  </xsl:template>

</xsl:stylesheet>

