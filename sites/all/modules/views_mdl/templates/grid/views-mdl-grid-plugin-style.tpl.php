<?php
/**
 * @file views-mdl-grid-plugin-style.tpl.php
 * Default simple view template to display MDL Grids.
 *
 *
 * - $columns contains rows grouped by columns.
 * - $rows contains a nested array of rows. Each row contains an array of
 *   columns.
 * - $column_type contains a number (default MDL grid system column type).
 *
 * @ingroup views_templates
 */
?>

<div id="views-mdl-grid-<?php print $id ?>" class="<?php print $classes ?>">
  <?php if ($options['alignment'] == 'horizontal'): ?>

    <?php foreach ($items as $row): ?>
      <div class="mdl-grid">
        <?php foreach ($row['content'] as $column): ?>
          <div class="mdl-cell--<?php print $column_type ?>-col">
            <?php print $column['content'] ?>
          </div>
        <?php endforeach ?>
      </div>
    <?php endforeach ?>

  <?php else: ?>

    <div class="mdl-grid">
      <?php foreach ($items as $column): ?>
        <div class="mdl-cell mdl-cell--<?php print $column_type ?>-col">
          <?php foreach ($column['content'] as $row): ?>
            <?php print $row['content'] ?>
          <?php endforeach ?>
        </div>
      <?php endforeach ?>
    </div>

  <?php endif ?>
</div>

