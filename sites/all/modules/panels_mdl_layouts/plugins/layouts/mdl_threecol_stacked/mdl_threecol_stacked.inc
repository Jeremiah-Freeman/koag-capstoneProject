<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Three stacked Grids'),
  'category' => t('MDL'),
  'icon' => 'mdl_threecol_stacked.png',
  'theme' => 'mdl_threecol_stacked',
  'admin css' => '../panels-mdl-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left side'),
    'middle' => t('Middle column'),
    'right' => t('Right side'),
    'bottom' => t('Bottom'),
  ),
);
