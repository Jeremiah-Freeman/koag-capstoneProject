<?php

/**
 * Implementation of template preprocess for the view.
 */
function template_preprocess_views_mdl_card_plugin_style(&$vars) {
    $view     = $vars['view'];
    $options  = $view->style_plugin->options;
    $horizontal = ($options['alignment'] === 'horizontal');

    $columns = $options['columns'];

    // Split items by rows and columns.
    $vars['items'] = _views_mdl_split_rows($vars, $columns, $horizontal);
    $vars['column_type'] = 12 / $columns;
}

/**
 * Implementation of template preprocess for the view fields.
 */
function template_preprocess_views_mdl_card_plugin_rows(&$vars) {
    $view = &$vars['view'];

    foreach ($vars['options'] as $id => $field) {
        if (in_array($id, array('image', 'title', 'supporting_text'))) {
            if (isset($view->field[$field])) {
                $vars[$id] = $view->style_plugin->get_field($view->row_index, $field);
            }
        }
    }
}
