<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_mdl_table_plugin_style(&$vars) {
    $vars['selectable'] = FALSE;
    if (module_exists('views_bulk_operations')) {
        $vars['selectable'] = TRUE;
    }
template_preprocess_views_view_table($vars);
}
