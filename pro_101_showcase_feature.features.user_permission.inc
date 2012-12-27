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
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete any featured content.
  $permissions['delete any featured content'] = array(
    'name' => 'delete any featured content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: delete own featured content.
  $permissions['delete own featured content'] = array(
    'name' => 'delete own featured content',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'node',
  );

  // Exported permission: edit any featured content.
  $permissions['edit any featured content'] = array(
    'name' => 'edit any featured content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: edit own featured content.
  $permissions['edit own featured content'] = array(
    'name' => 'edit own featured content',
    'roles' => array(
      0 => 'developer',
      1 => 'support',
    ),
    'module' => 'node',
  );

  // Exported permission: enter featured revision log entry.
  $permissions['enter featured revision log entry'] = array(
    'name' => 'enter featured revision log entry',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured authored by option.
  $permissions['override featured authored by option'] = array(
    'name' => 'override featured authored by option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured authored on option.
  $permissions['override featured authored on option'] = array(
    'name' => 'override featured authored on option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured promote to front page option.
  $permissions['override featured promote to front page option'] = array(
    'name' => 'override featured promote to front page option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured published option.
  $permissions['override featured published option'] = array(
    'name' => 'override featured published option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured revision option.
  $permissions['override featured revision option'] = array(
    'name' => 'override featured revision option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  // Exported permission: override featured sticky option.
  $permissions['override featured sticky option'] = array(
    'name' => 'override featured sticky option',
    'roles' => array(
      0 => 'developer',
    ),
    'module' => 'override_node_options',
  );

  return $permissions;
}
