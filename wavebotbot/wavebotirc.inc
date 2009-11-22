<?php


class wavebotirc
{
    // property declaration
    public $messages = array();

    // method declaration
    public function message($type, $to, $message) {
        /*switch($type) {
          case '':
            break; 
        }*/
        $messages[] = $message; 
    }
     public function get_messages() {
        if ($messages) return implode("<br/>",$messages);
    }   
}