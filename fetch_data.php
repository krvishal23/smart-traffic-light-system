<?php
include 'db_config.php';

$result = $conn->query("SELECT * FROM traffic_data ORDER BY id DESC LIMIT 1");
$row = $result->fetch_assoc();
echo json_encode($row);
?>
