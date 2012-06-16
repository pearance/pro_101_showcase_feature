<?php
/**
 * @file
 * pro_101_showcase_feature.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function pro_101_showcase_feature_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function pro_101_showcase_feature_views_api() {
  return array("version" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function pro_101_showcase_feature_image_default_styles() {
  $styles = array();

  // Exported image style: showcase-wide.
  $styles['showcase-wide'] = array(
    'name' => 'showcase-wide',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '1220',
          'height' => '400',
        ),
        'weight' => '1',
      ),
    ),
  );

  // Exported image style: thumbnail-mini.
  $styles['thumbnail-mini'] = array(
    'name' => 'thumbnail-mini',
    'effects' => array(
      2 => array(
        'label' => 'Scale and crop',
        'help' => 'Scale and crop will maintain the aspect-ratio of the original image, then crop the larger dimension. This is most useful for creating perfectly square thumbnails without stretching the image.',
        'effect callback' => 'image_scale_and_crop_effect',
        'dimensions callback' => 'image_resize_dimensions',
        'form callback' => 'image_resize_form',
        'summary theme' => 'image_resize_summary',
        'module' => 'image',
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => '50',
          'height' => '50',
        ),
        'weight' => '2',
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function pro_101_showcase_feature_node_info() {
  $items = array(
    'featured' => array(
      'name' => t('Feature'),
      'base' => 'node_content',
      'description' => t('Use <em>Feature</em> to prominently showcase featured content usually on the front page.'),
      'has_title' => '1',
      'title_label' => t('Feature Title'),
      'help' => '',
    ),
  );
  return $items;
}
