#!/usr/bin/php
<?php
passthru('rm -rf www');
passthru('drush make ddw/build.make www');
