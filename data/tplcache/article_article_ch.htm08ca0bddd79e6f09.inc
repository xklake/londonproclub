<?php
$z[0]=Array("global","",236,264);
$z[0][4]['name']="cfg_soft_lang";
$z[1]=Array("field","",277,296);
$z[1][4]['name']="title";
$z[2]=Array("global","",297,323);
$z[2][4]['name']="cfg_webname";
$z[3]=Array("field","",364,386);
$z[3][4]['name']="keywords";
$z[4]=Array("field","",426,477);
$z[4][4]['name']="description";
$z[4][4]['function']="html2text(@me)";
$z[5]=Array("global","",495,527);
$z[5][4]['name']="cfg_templets_skin";
$z[6]=Array("include","",616,654);
$z[6][4]['filename']="head_ch.htm";
$z[7]=Array("field","",767,786);
$z[7][4]['name']="title";
$z[8]=Array("field","",875,931);
$z[8][4]['name']="pubdate";
$z[8][4]['function']="MyDate('Y-m-d H:i',@me)";
$z[9]=Array("field","\r\n  if(@me<>'' )@me = '\r\n  <div class=\"introduce\"><strong>简介:</strong>'.@me.'</div>\r\n  ';\r\n  ",973,1132);
$z[9][4]['name']="description";
$z[9][4]['runphp']="yes";
$z[10]=Array("field","",1171,1189);
$z[10][4]['name']="body";
$z[11]=Array("prenext","",1358,1383);
$z[11][4]['get']="pre";
$z[12]=Array("prenext","",1399,1425);
$z[12][4]['get']="next";
$z[13]=Array("include","",1505,1545);
$z[13][4]['filename']="footer_ch.htm";

?>