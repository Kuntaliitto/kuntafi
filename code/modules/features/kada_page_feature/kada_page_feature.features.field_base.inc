<?php
/**
 * @file
 * kada_page_feature.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function kada_page_feature_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'field_info_box_bottom'.
  $field_bases['field_info_box_bottom'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_info_box_bottom',
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(
      'entity_translation_sync' => FALSE,
    ),
    'translatable' => 0,
    'type' => 'text_long',
  );

  return $field_bases;
}
