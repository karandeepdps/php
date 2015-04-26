<?php
$a = fopen("studentdetails.txt", "r") or die("Unable to open file!");
$aa=fread($a,filesize("studentdetails.txt"));
$b= fopen("b.txt","a");
fwrite($b,$aa);
?>