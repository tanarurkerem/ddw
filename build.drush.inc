<?php
function build_drush_command() {
  $items = array();
   $items['build'] = array(
   'description' => "Build our project",
   'arguments' => array(),
   'bootstrap' => DRUSH_BOOTSTRAP_DRUSH,
  );
  return $items;
}

function drush_build() {
  echo 'hello';
}
