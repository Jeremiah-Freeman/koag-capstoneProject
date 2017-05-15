<?php

/**
 * Implements hook_panels_layouts().
 */
// Plugin definition
$plugin = array(
  'title' => t('Two Column Grids'),
  'category' => t('MDL'),
  'icon' => 'mdl_twocol_stacked.png',
  'theme' => 'mdl_twocol_stacked',
  'admin css' => '../panels-mdl-layouts-admin.css',
  'regions' => array(
    'top' => t('Top'),
    'left' => t('Left'),
    'right' => t('Right'),
    'bottom' => t('Bottom'),
  ),
);
