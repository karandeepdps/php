<?php
$r=$_GET['a'];
$n=$_GET['b'];
$a=$_GET['c'];
$c=$_GET['d'];
$txt = "||".$r."||".$n."||".$a."||".$c."||"."<br>";
$myfile = fopen("studentdetails.txt", "a") or die("Unable to open file!");
fwrite($myfile, $txt);
?>