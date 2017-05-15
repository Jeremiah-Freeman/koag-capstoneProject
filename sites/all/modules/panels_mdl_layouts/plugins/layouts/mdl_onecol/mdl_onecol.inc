<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Single Grid'),
  'category' => t('MDL'),
  'icon' => 'mdl_onecol.png',
  'theme' => 'mdl_onecol',
  'admin css' => '../panels-mdl-layouts-admin.css',
  'regions' => array(
    'middle' => t('Middle'),
  ),
);
