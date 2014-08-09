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
  passthru('rm -rf www');
  passthru('drush make ddw/build.make www');
}
