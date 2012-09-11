<?php
/**
 * @file
 * humanitarianresponse_emergency_menu.features.uuid_menu_links.inc
 */

/**
 * Implements hook_uuid_menu_default_menu_links().
 */
function humanitarianresponse_emergency_menu_uuid_menu_default_menu_links() {
  $uuid_menu_links = array();

  // Exported menu link: main-menu:<front>
  $uuid_menu_links['main-menu:<front>'] = array(
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '1',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => '<front>',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:clusters
  $uuid_menu_links['main-menu:clusters'] = array(
    'router_path' => 'clusters',
    'link_title' => 'Clusters',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-25',
    'uuid_link_path' => 'clusters',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:coordination/calendar
  $uuid_menu_links['main-menu:coordination/calendar'] = array(
    'router_path' => 'coordination/calendar',
    'link_title' => 'Calendar',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => 'coordination/calendar',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/49d73c11-0083-6944-818f-51687e6520fd',
  );
  // Exported menu link: main-menu:coordination/coordination-hubs
  $uuid_menu_links['main-menu:coordination/coordination-hubs'] = array(
    'router_path' => 'coordination/coordination-hubs',
    'link_title' => 'Coordination Hubs',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'uuid_link_path' => 'coordination/coordination-hubs',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/49d73c11-0083-6944-818f-51687e6520fd',
  );
  // Exported menu link: main-menu:coordination/operational-presence
  $uuid_menu_links['main-menu:coordination/operational-presence'] = array(
    'router_path' => 'coordination/operational-presence',
    'link_title' => 'Operational Presence',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'uuid_link_path' => 'coordination/operational-presence',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/49d73c11-0083-6944-818f-51687e6520fd',
  );
  // Exported menu link: main-menu:funding
  $uuid_menu_links['main-menu:funding'] = array(
    'router_path' => 'funding',
    'link_title' => 'Funding',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-30',
    'uuid_link_path' => 'funding',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:media-center/events
  $uuid_menu_links['main-menu:media-center/events'] = array(
    'router_path' => 'media-center/events',
    'link_title' => 'Events',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => 'media-center/events',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
  );
  // Exported menu link: main-menu:media-center/galleries
  $uuid_menu_links['main-menu:media-center/galleries'] = array(
    'router_path' => 'media-center/galleries',
    'link_title' => 'Photos & Videos',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'uuid_link_path' => 'media-center/galleries',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
  );
  // Exported menu link: main-menu:media-center/news
  $uuid_menu_links['main-menu:media-center/news'] = array(
    'router_path' => 'media-center/news',
    'link_title' => 'News',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'uuid_link_path' => 'media-center/news',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
  );
  // Exported menu link: main-menu:media-center/press-releases
  $uuid_menu_links['main-menu:media-center/press-releases'] = array(
    'router_path' => 'media-center/press-releases',
    'link_title' => 'Press Releases',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-30',
    'uuid_link_path' => 'media-center/press-releases',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
  );
  // Exported menu link: main-menu:node/232ca9d0-f223-2114-01bb-772c3f3de5d2
  $uuid_menu_links['main-menu:node/232ca9d0-f223-2114-01bb-772c3f3de5d2'] = array(
    'router_path' => 'node/%',
    'link_title' => 'COD/FOD Data',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => 'node/232ca9d0-f223-2114-01bb-772c3f3de5d2',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/429c837b-c13e-3b24-a17f-86cfc664b08c',
  );
  // Exported menu link: main-menu:node/429c837b-c13e-3b24-a17f-86cfc664b08c
  $uuid_menu_links['main-menu:node/429c837b-c13e-3b24-a17f-86cfc664b08c'] = array(
    'router_path' => 'node/%',
    'link_title' => 'Visuals & Data',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-20',
    'uuid_link_path' => 'node/429c837b-c13e-3b24-a17f-86cfc664b08c',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:node/49d73c11-0083-6944-818f-51687e6520fd
  $uuid_menu_links['main-menu:node/49d73c11-0083-6944-818f-51687e6520fd'] = array(
    'router_path' => 'node/%',
    'link_title' => 'Coordination',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-40',
    'uuid_link_path' => 'node/49d73c11-0083-6944-818f-51687e6520fd',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:node/70684b57-84ea-0284-21dc-2aee75c77484
  $uuid_menu_links['main-menu:node/70684b57-84ea-0284-21dc-2aee75c77484'] = array(
    'router_path' => 'node/%',
    'link_title' => 'CDAC Network',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-40',
    'uuid_link_path' => 'node/70684b57-84ea-0284-21dc-2aee75c77484',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930
  $uuid_menu_links['main-menu:node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930'] = array(
    'router_path' => 'node/%',
    'link_title' => 'Media Center',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-15',
    'uuid_link_path' => 'node/c58d6b80-f5ca-0f94-099e-fe2d29e5c930',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:resources
  $uuid_menu_links['main-menu:resources'] = array(
    'router_path' => 'resources',
    'link_title' => 'Resources',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '0',
    'weight' => '-35',
    'uuid_link_path' => 'resources',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => NULL,
  );
  // Exported menu link: main-menu:resources/assessment-registry
  $uuid_menu_links['main-menu:resources/assessment-registry'] = array(
    'router_path' => 'resources/assessment-registry',
    'link_title' => 'Assessment Registry',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-45',
    'uuid_link_path' => 'resources/assessment-registry',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/dashboard
  $uuid_menu_links['main-menu:resources/dashboard'] = array(
    'router_path' => 'resources/dashboard',
    'link_title' => 'Dashboard',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'uuid_link_path' => 'resources/dashboard',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/policy-and-guidance
  $uuid_menu_links['main-menu:resources/policy-and-guidance'] = array(
    'router_path' => 'resources/policy-and-guidance',
    'link_title' => 'Policy & Guidance',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-30',
    'uuid_link_path' => 'resources/policy-and-guidance',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/reports
  $uuid_menu_links['main-menu:resources/reports'] = array(
    'router_path' => 'resources/reports',
    'link_title' => 'Reports',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-25',
    'uuid_link_path' => 'resources/reports',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:resources/training-and-resource-materials
  $uuid_menu_links['main-menu:resources/training-and-resource-materials'] = array(
    'router_path' => 'resources/training-and-resource-materials',
    'link_title' => 'Training & Resource Materials',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
    ),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-20',
    'uuid_link_path' => 'resources/training-and-resource-materials',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'resources',
  );
  // Exported menu link: main-menu:visuals-data/humanitarian-profile
  $uuid_menu_links['main-menu:visuals-data/humanitarian-profile'] = array(
    'router_path' => 'visuals-data/humanitarian-profile',
    'link_title' => 'Humanitarian Profile Summary',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-40',
    'uuid_link_path' => 'visuals-data/humanitarian-profile',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/429c837b-c13e-3b24-a17f-86cfc664b08c',
  );
  // Exported menu link: main-menu:visuals-data/visuals
  $uuid_menu_links['main-menu:visuals-data/visuals'] = array(
    'router_path' => 'visuals-data/visuals',
    'link_title' => 'Visuals',
    'options' => array(),
    'module' => 'menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '0',
    'weight' => '-35',
    'uuid_link_path' => 'visuals-data/visuals',
    'uuid_menu_name' => 'main-menu',
    'uuid_parent_path' => 'node/429c837b-c13e-3b24-a17f-86cfc664b08c',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Assessment Registry');
  t('CDAC Network');
  t('COD/FOD Data');
  t('Calendar');
  t('Clusters');
  t('Coordination');
  t('Coordination Hubs');
  t('Dashboard');
  t('Events');
  t('Funding');
  t('Home');
  t('Humanitarian Profile Summary');
  t('Media Center');
  t('News');
  t('Operational Presence');
  t('Photos & Videos');
  t('Policy & Guidance');
  t('Press Releases');
  t('Reports');
  t('Resources');
  t('Training & Resource Materials');
  t('Visuals');
  t('Visuals & Data');


  return $uuid_menu_links;
}
