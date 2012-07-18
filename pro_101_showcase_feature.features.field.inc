<?php
/**
 * @file
 * pro_101_showcase_feature.features.field.inc
 */

/**
 * Implements hook_field_default_fields().
 */
function pro_101_showcase_feature_field_default_fields() {
  $fields = array();

  // Exported field: 'node-featured-field_subtitle'.
  $fields['node-featured-field_subtitle'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_subtitle',
      'foreign keys' => array(
        'format' => array(
          'columns' => array(
            'format' => 'format',
          ),
          'table' => 'filter_format',
        ),
      ),
      'indexes' => array(
        'format' => array(
          0 => 'format',
        ),
      ),
      'locked' => '0',
      'module' => 'text',
      'settings' => array(),
      'translatable' => '0',
      'type' => 'text_long',
    ),
    'field_instance' => array(
      'bundle' => 'featured',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'text',
          'settings' => array(),
          'type' => 'text_default',
          'weight' => '1',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_subtitle',
      'label' => 'Feature Subtitle',
      'required' => 0,
      'settings' => array(
        'text_processing' => '1',
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'text',
        'settings' => array(
          'maxlength_js' => '',
          'maxlength_js_enforce' => 0,
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'maxlength_js_truncate_html' => 0,
          'rows' => '5',
        ),
        'type' => 'text_textarea',
        'weight' => '1',
      ),
    ),
  );

  // Exported field: 'node-featured-field_title_graphic'.
  $fields['node-featured-field_title_graphic'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_title_graphic',
      'foreign keys' => array(
        'fid' => array(
          'columns' => array(
            'fid' => 'fid',
          ),
          'table' => 'file_managed',
        ),
      ),
      'indexes' => array(
        'fid' => array(
          0 => 'fid',
        ),
      ),
      'locked' => '0',
      'module' => 'image',
      'settings' => array(
        'default_image' => 0,
        'uri_scheme' => 'public',
      ),
      'translatable' => '0',
      'type' => 'image',
    ),
    'field_instance' => array(
      'bundle' => 'featured',
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'image',
          'settings' => array(
            'image_link' => '',
            'image_style' => '',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
        'teaser' => array(
          'label' => 'hidden',
          'module' => 'image',
          'settings' => array(
            'image_link' => 'content',
            'image_style' => 'featured_large',
          ),
          'type' => 'image',
          'weight' => '0',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_title_graphic',
      'label' => 'Feature Graphic',
      'required' => 0,
      'settings' => array(
        'alt_field' => 1,
        'default_image' => '1',
        'file_directory' => '',
        'file_extensions' => 'png gif jpg jpeg svg',
        'max_filesize' => '',
        'max_resolution' => '',
        'min_resolution' => '',
        'title_field' => 1,
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'media',
        'settings' => array(
          'allowed_schemes' => array(
            'feed' => 'feed',
            'http' => 'http',
            'https' => 'https',
            'private' => 'private',
            'public' => 'public',
          ),
          'allowed_types' => array(
            'image' => 'image',
            'video' => 0,
            0 => 0,
            'audio' => 0,
            'default' => 0,
          ),
          'browser_plugins' => array(
            'library' => 0,
            'media_default--media_browser_1' => 'media_default--media_browser_1',
            'media_default--media_browser_my_files' => 0,
            'media_internet' => 'media_internet',
            'remote_file' => 'remote_file',
            'upload' => 'upload',
          ),
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
          'progress_indicator' => 'throbber',
        ),
        'type' => 'media_generic',
        'weight' => '2',
      ),
    ),
  );

  // Exported field: 'node-featured-field_url'.
  $fields['node-featured-field_url'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_url',
      'foreign keys' => array(),
      'indexes' => array(),
      'locked' => '0',
      'module' => 'link',
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'rel' => '',
          'target' => 'default',
        ),
        'display' => array(
          'url_cutoff' => 80,
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => 128,
        'title_value' => '',
        'url' => 0,
      ),
      'translatable' => '0',
      'type' => 'link_field',
    ),
    'field_instance' => array(
      'bundle' => 'featured',
      'default_value' => array(
        0 => array(
          'title' => 'Read More',
          'url' => '/',
          'attributes' => array(
            'title' => '',
          ),
        ),
      ),
      'deleted' => '0',
      'description' => 'To link to external sites use a full URL (e.g. http://www.another-site.com) or to link internally, use a relative path (e.g. about-us).',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'link',
          'settings' => array(),
          'type' => 'link_default',
          'weight' => '2',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_url',
      'label' => 'Feature URL',
      'required' => 0,
      'settings' => array(
        'attributes' => array(
          'class' => '',
          'configurable_title' => 1,
          'rel' => '',
          'target' => 'default',
          'title' => '',
        ),
        'display' => array(
          'url_cutoff' => '80',
        ),
        'enable_tokens' => 1,
        'title' => 'optional',
        'title_maxlength' => '128',
        'title_value' => '',
        'url' => 0,
        'user_register_form' => FALSE,
        'validate_url' => 0,
      ),
      'widget' => array(
        'active' => 0,
        'module' => 'link',
        'settings' => array(
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        ),
        'type' => 'link_field',
        'weight' => '3',
      ),
    ),
  );

  // Exported field: 'node-featured-field_weight'.
  $fields['node-featured-field_weight'] = array(
    'field_config' => array(
      'active' => '1',
      'cardinality' => '1',
      'deleted' => '0',
      'entity_types' => array(),
      'field_name' => 'field_weight',
      'foreign keys' => array(),
      'indexes' => array(
        'value' => array(
          0 => 'value',
        ),
      ),
      'locked' => '0',
      'module' => 'list',
      'settings' => array(
        'allowed_values' => array(
          1 => '1',
          2 => '2',
          3 => '3',
          4 => '4',
          5 => '5',
          6 => '6',
          7 => '7',
          8 => '8',
          9 => '9',
          10 => '10',
        ),
        'allowed_values_function' => '',
      ),
      'translatable' => '0',
      'type' => 'list_integer',
    ),
    'field_instance' => array(
      'bundle' => 'featured',
      'default_value' => NULL,
      'deleted' => '0',
      'description' => '',
      'display' => array(
        'default' => array(
          'label' => 'above',
          'module' => 'list',
          'settings' => array(),
          'type' => 'list_default',
          'weight' => '3',
        ),
      ),
      'ds_extras_field_template' => '',
      'entity_type' => 'node',
      'field_name' => 'field_weight',
      'label' => 'Feature Weight',
      'required' => 1,
      'settings' => array(
        'user_register_form' => FALSE,
      ),
      'widget' => array(
        'active' => 1,
        'module' => 'options',
        'settings' => array(
          'maxlength_js_label' => 'Content limited to @limit characters, remaining: <strong>@remaining</strong>',
        ),
        'type' => 'options_select',
        'weight' => '4',
      ),
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Feature Graphic');
  t('Feature Subtitle');
  t('Feature URL');
  t('Feature Weight');
  t('To link to external sites use a full URL (e.g. http://www.another-site.com) or to link internally, use a relative path (e.g. about-us).');

  return $fields;
}
