<?php
$x=$_GET['sal'];
if ($x>400000)
echo $x*20/100;
else if ($x>=180000 && $x<=400000)
echo $x*10/100;
else
echo 'NIL';
?>