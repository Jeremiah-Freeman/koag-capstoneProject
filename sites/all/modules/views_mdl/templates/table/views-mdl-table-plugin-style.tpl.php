<?php
/**
 * @file views-mdl-table-plugin-style.tpl.php
 * Default simple view template to display MDL Tables.
 *
 * - $selectable if the views bulk operations module is enabled, this variable
 *   is set to TRUE.
 *
 * @ingroup views_templates
 */
?>

<table class="mdl-data-table <?php if ($selectable) { print 'mdl-data-table--selectable'; } ?> <?php if ($classes) { print $classes ; } ?>"<?php print $attributes; ?>>
   <?php if (!empty($title) || !empty($caption)) : ?>
     <caption><?php print $caption . $title; ?></caption>
  <?php endif; ?>
  <?php if (!empty($header)) : ?>
    <thead>
      <tr>
        <?php foreach ($header as $field => $label): ?>
          <th class="mdl-data-table__cell--non-numeric <?php if ($header_classes[$field]) { print $header_classes[$field]; } ?>" scope="col">
            <?php print $label; ?>
          </th>
        <?php endforeach; ?>
      </tr>
    </thead>
  <?php endif; ?>
  <tbody>
    <?php foreach ($rows as $row_count => $row): ?>
      <tr>
        <?php foreach ($row as $field => $content): ?>
          <td class="mdl-data-table__cell--non-numeric">
            <?php print $content; ?>
          </td>
        <?php endforeach; ?>
      </tr>
    <?php endforeach; ?>
  </tbody>
</table>
