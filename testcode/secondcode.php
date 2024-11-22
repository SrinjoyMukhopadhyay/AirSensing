<?php
class room{
 public $link='';
 function __construct($gas){
  $this->connect();
  $this->storeInDB($gas);
 }
 
 function connect(){
  $this->link = mysqli_connect('localhost','root','') or die('Cannot connect to the DB');
  mysqli_select_db($this->link,'firstdb') or die('Cannot select the DB');
 }
 
 function storeInDB($gas){
  $query = "insert into room set gas='".$gas."'";
  $result = mysqli_query($this->link,$query) or die('Errant query:  '.$query);
 }
 
}
if($_GET['gas'] != ''){
 $room=new room($_GET['gas']);
}


?>