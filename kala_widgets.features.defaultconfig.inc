<?php
/**
 * @file
 * kala_widgets.features.defaultconfig.inc
 */

/**
 * Implements hook_defaultconfig_features().
 */
function kala_widgets_defaultconfig_features() {
  return array(
    'kala_widgets' => array(
      'user_default_permissions' => 'user_default_permissions',
    ),
  );
}

/**
 * Implements hook_defaultconfig_user_default_permissions().
 */
function kala_widgets_defaultconfig_user_default_permissions() {
  $permissions = array();

  // Exported permission: create fieldable kala_image.
  $permissions['create fieldable kala_image'] = array(
    'name' => 'create fieldable kala_image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: delete fieldable kala_image.
  $permissions['delete fieldable kala_image'] = array(
    'name' => 'delete fieldable kala_image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  // Exported permission: edit fieldable kala_image.
  $permissions['edit fieldable kala_image'] = array(
    'name' => 'edit fieldable kala_image',
    'roles' => array(),
    'module' => 'fieldable_panels_panes',
  );

  return $permissions;
}
