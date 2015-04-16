<?php
$x=$_GET['n'];
$y=$_GET['s'];
$username="root";
$password="";
$servername="localhost";
$database="KARAN";
$conn=new mysqli($servername,$username,$password,$database);
$sql="Insert into SAP(Name,Sap) values ('$x','$y')";
if($conn->query($sql)=== TRUE)
{
	echo "Inserted Succesfully $x with sap id $y <br>";
	//echo $x."Inserted succesfully with sap id".$y;
}
else
{
	echo $conn->error;
}
$k="SELECT * FROM SAP";
$result=$conn->query($k);

while($row=$result->fetch_assoc())
{
	if($row['Sap']=='5000')
	echo $row['Name']."&nbsp";
echo $row['Sap']."<br>";
}

?>