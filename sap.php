<?php
$x=$_GET['n'];
$y=$_GET['s'];
$username="root";
$password="";
$servername="localhost";
$database="KARAN";
$conn=new mysqli($servername,$username,$password,$database);
$sql="Insert into SAP(Name,SAP) values ('$x','$y')";
if($conn->query($sql)=== TRUE)
{
	echo "Inserted Succesfully $x with sap id $y";
	//echo $x."Inserted succesfully with sap id".$y;
}
else
{
	echo $conn->error;
}
$k="SELECT * FROM SAP";
$row=$conn->query($k)->fetch_assoc();
echo $row["Name"];
?>