<?php
$myfile = fopen("studentdetails.txt", "r") or die("Unable to open file!");
$x=fread($myfile,filesize("studentdetails.txt"));
echo $x;
?>