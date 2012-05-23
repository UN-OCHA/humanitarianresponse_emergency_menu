<?php
/**
 * @file
 * humanitarianresponse_emergency_menu.features.uuid_entities.inc
 */

/**
 * Implements hook_uuid_default_entities().
 */
function humanitarianresponse_emergency_menu_uuid_default_entities() {
  $entities = array();

  $entities['main_menu'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/49d73c11-0083-6944-818f-51687e6520fd',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'cid' => '0',
    'comment' => '0',
    'comment_count' => '0',
    'language' => 'und',
    'last_comment_name' => '',
    'last_comment_uid' => '1',
    'log' => '',
    'path' => array(
      'alias' => 'coordination',
      'pathauto' => FALSE,
    ),
    'promote' => '0',
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => '1',
    'sticky' => '0',
    'title' => 'Coordination',
    'tnid' => '0',
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => '49d73c11-0083-6944-818f-51687e6520fd',
  );
  $entities['main_menu'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/429c837b-c13e-3b24-a17f-86cfc664b08c',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'cid' => '0',
    'comment' => '0',
    'comment_count' => '0',
    'language' => 'und',
    'last_comment_name' => '',
    'last_comment_uid' => '1',
    'log' => '',
    'path' => array(
      'alias' => 'visuals-data',
      'pathauto' => FALSE,
    ),
    'promote' => '0',
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => '1',
    'sticky' => '0',
    'title' => 'Visuals & Data',
    'tnid' => '0',
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => '429c837b-c13e-3b24-a17f-86cfc664b08c',
  );
  $entities['main_menu'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '',
        ),
      ),
    ),
    'cid' => '0',
    'comment' => '0',
    'comment_count' => '0',
    'language' => 'und',
    'last_comment_name' => '',
    'last_comment_uid' => '1',
    'log' => '',
    'path' => array(
      'alias' => 'media',
      'pathauto' => FALSE,
    ),
    'promote' => '0',
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => '1',
    'sticky' => '0',
    'title' => 'Media Center',
    'tnid' => '0',
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => 'c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
  );
  $entities['main_menu'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/232ca9d0-f223-2114-01bb-772c3f3de5d2',
      'cause' => FALSE,
    ),
    'body' => array(
      'und' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<iframe width=988 height=500 scrolling="auto" marginheight="0" marginwidth="0" src="http://cod.humanitarianresponse.info/country-region/dev1?iframe"></iframe>',
        ),
      ),
    ),
    'cid' => '0',
    'comment' => '0',
    'comment_count' => '0',
    'language' => 'und',
    'last_comment_name' => '',
    'last_comment_uid' => '1',
    'log' => '',
    'path' => array(
      'alias' => 'codfod-data',
      'pathauto' => FALSE,
    ),
    'promote' => '0',
    'rdf_mapping' => array(
      'rdftype' => array(
        0 => 'sioc:Item',
        1 => 'foaf:Document',
      ),
      'title' => array(
        'predicates' => array(
          0 => 'dc:title',
        ),
      ),
      'created' => array(
        'predicates' => array(
          0 => 'dc:date',
          1 => 'dc:created',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'changed' => array(
        'predicates' => array(
          0 => 'dc:modified',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
      'body' => array(
        'predicates' => array(
          0 => 'content:encoded',
        ),
      ),
      'uid' => array(
        'predicates' => array(
          0 => 'sioc:has_creator',
        ),
        'type' => 'rel',
      ),
      'name' => array(
        'predicates' => array(
          0 => 'foaf:name',
        ),
      ),
      'comment_count' => array(
        'predicates' => array(
          0 => 'sioc:num_replies',
        ),
        'datatype' => 'xsd:integer',
      ),
      'last_activity' => array(
        'predicates' => array(
          0 => 'sioc:last_activity_date',
        ),
        'datatype' => 'xsd:dateTime',
        'callback' => 'date_iso8601',
      ),
    ),
    'status' => '1',
    'sticky' => '0',
    'title' => 'COD/FOD Data',
    'tnid' => '0',
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => '232ca9d0-f223-2114-01bb-772c3f3de5d2',
  );

  return $entities;
}
