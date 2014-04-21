<?php
/**
 * @file
 * luggage_events_solr.features.features_overrides.inc
 */

/**
 * Implements hook_features_override_default_overrides().
 */
function luggage_events_solr_features_override_default_overrides() {
  // This code is only used for UI in features. Exported alters hooks do the magic.
  $overrides = array();

  // Exported overrides for: field_instance
  $overrides["field_instance.node-event-field_category.display|default|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_category.display|default|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_category.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_category.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_event_type.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_event_type.display|search_index|type"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_tags.display|search_index|module"] = 'taxonomy_to_apachesolr_link';
  $overrides["field_instance.node-event-field_tags.display|search_index|type"] = 'taxonomy_to_apachesolr_link';

 return $overrides;
}