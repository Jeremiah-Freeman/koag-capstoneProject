<div class="<?php print $classes ?>" <?php if (!empty($css_id)) { print "id=\"$css_id\""; } ?>>
  <div class="mdl-grid">
    <?php print $content['top']; ?>
  </div>
  <div class="mdl-grid">
    <?php print $content['left']; ?>
    <?php print $content['right']; ?>
  </div>
  <div class="mdl-grid">
    <?php print $content['bottom']; ?>
  </div>
</div>
