<?php
/**
 * @file views-mdl-card-plugin-rows.tpl.php
 * Default simple view template to display MDL Thumbnails.
 *
 * @ingroup views_templates
 */
?>

<div class="mdl-card">
<div class="mdl-card__media">
<?php print $image ?>
</div>

<?php if (!empty($title) || !empty($supporting_text)): ?>
    <?php if (!empty($title)): ?>
  <div class="mdl-card__title">
      <h3 class="mdl-card__title-text"><?php print $title ?></h3>
  </div>
    <?php endif ?>
    <?php if (!empty($supporting_text)): ?>
  <div class="mdl-card__supporting-text">
    <?php print $supporting_text ?>
  </div>
    <?php endif ?>
    <?php foreach ($content as $field): ?>
      <?php if (!empty($field)): ?>
        <?php print $field ?>
      <?php endif ?>
    <?php endforeach ?>
  </div>
<?php endif ?>
