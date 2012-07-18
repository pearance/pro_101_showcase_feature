<?php
/**
 * @file
 * pro_101_showcase_feature.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function pro_101_showcase_feature_user_default_permissions() {
  $permissions = array();

  // Exported permission: create featured content.
  $permissions['create featured content'] = array(
    'name' => 'create featured content',
    'roles' => array(
      0 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured content.
  $permissions['delete any featured content'] = array(
    'name' => 'delete any featured content',
    'roles' => array(
      0 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured content.
  $permissions['delete own featured content'] = array(
    'name' => 'delete own featured content',
    'roles' => array(
      0 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured content.
  $permissions['edit any featured content'] = array(
    'name' => 'edit any featured content',
    'roles' => array(
      0 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured content.
  $permissions['edit own featured content'] = array(
    'name' => 'edit own featured content',
    'roles' => array(
      0 => 'support',
    ),
    'module' => 'node',
  );

  return $permissions;
}
