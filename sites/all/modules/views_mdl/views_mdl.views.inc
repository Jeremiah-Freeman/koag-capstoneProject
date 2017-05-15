<?php
/**
 * @file
 * Provide views data and handlers.
 */

/**
 * Implements hook_views_plugins().
 */
function views_mdl_views_plugins() {
  $module_path = drupal_get_path('module', 'views_mdl');

  return array(
    'style' => array(
      'views_mdl_grid_plugin_style' => array(
        'title' => t('MDL Grid'),
        'help' => t('MDL Grid Style'),
        'path' => $module_path . '/plugins/grid',
        'handler' => 'ViewsMDLGridPluginStyle',
        'parent' => 'default',
        'theme' => 'views_mdl_grid_plugin_style',
        'theme path' => $module_path . '/templates/grid',
        'theme file' => 'theme.inc',
        'uses row plugin' => TRUE,
        'uses grouping' => FALSE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
     'views_mdl_table_plugin_style' => array(
        'title' => t('MDL Table'),
        'help' => t('MDL enahnced Table Style'),
        'path' => $module_path . '/plugins/table',
        'handler' => 'ViewsMDLTablePluginStyle',
        'parent' => 'default',
        'theme' => 'views_mdl_table_plugin_style',
        'theme path' => $module_path . '/templates/table',
        'theme file' => 'theme.inc',
        'uses row plugin' => FALSE,
        'uses row class' => TRUE,
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
    'row' => array(
      'views_mdl_card_plugin_rows' => array(
        'title' => t('MDL Card'),
        'help' => t('Choose the fields to display in a Material Design Lite Card.'),
        'path' => $module_path . '/plugins/card',
        'handler' => 'ViewsMDLCardPluginRows',
        'theme' => 'views_mdl_card_plugin_rows',
        'theme path' => $module_path . '/templates/card',
        'theme file' => 'theme.inc',
        'uses fields' => TRUE,
        'uses options' => TRUE,
        'type' => 'normal',
      ),
    ),
  );
}
