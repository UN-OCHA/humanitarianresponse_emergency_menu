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
      'en' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/coordination/calendar">Calendar</a></li><li><a href="/coordination/coordination-hubs">Coordination Hubs</a></li><li><a href="/coordination/operational-presence">Operational Presence</a></li></ul>',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/coordination/calendar">Calendrier</a></li><li><a href="/coordination/coordination-hubs">Bureaux de Coordination</a></li><li><a href="/coordination/operational-presence">Présence Opérationnelle</a></li></ul>',
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
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Coordination',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Coordination',
        ),
      ),
    ),
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
      'en' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/visuals-data/cod-fod-data">COD/FOD Data</a></li><li><a href="/visuals-data/humanitarian-profile">Humanitarian Profile Summary</a></li><li><a href="/visuals-data/visuals">Visuals</a></li></ul>',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/visuals-data/cod-fod-data">Données COD/FOD</a></li><li><a href="/visuals-data/humanitarian-profile">Profil Humanitaire</a></li><li><a href="/visuals-data/visuals">Visuels</a></li></ul>',
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
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Visuals & Data',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Visuels & Données',
        ),
      ),
    ),
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
      'en' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/media-center/events">Events</a></li><li><a href="/media-center/news">News</a></li><li><a href="/media-center/galleries">Photos & Videos</a></li><li><a href="/media-center/press-releases">Press Releases</a></li></ul>',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'filtered_html',
          'summary' => '',
          'value' => '<ul><li><a href="/media-center/events">Evénements</a></li><li><a href="/media-center/news">Actualités</a></li><li><a href="/media-center/galleries">Photos & Vidéos</a></li><li><a href="/media-center/press-releases">Points Presse</a></li></ul>',
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
      'alias' => 'media-center',
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
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'Media Center',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Centre Multimédia',
        ),
      ),
    ),
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
      'alias' => 'visuals-data/cod-fod-data',
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
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'COD/FOD Data',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Données COD/FOD',
        ),
      ),
    ),
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => '232ca9d0-f223-2114-01bb-772c3f3de5d2',
  );
  $entities['main_menu'][] = (object) array(
    '__metadata' => array(
      'type' => 'node',
      'uri' => 'node/70684b57-84ea-0284-21dc-2aee75c77484',
      'cause' => FALSE,
    ),
    'body' => array(
      'en' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p style="text-align: center;"><img alt="CDAC Network" src="http://www.cdacnetwork.org/sites/www.cdacnetwork.org/themes/basic/images/CDAC-logo.png" /></p><p>A cross-sector collaboration between aid agencies, UN organisations, the Red Cross Movement, media development organisations, technology providers, and quality and accountability initiatives</p><hr><p>The Communicating with Disaster Affected Communities (CDAC) Network is a ground-breaking initiative that brings together expertise from the humanitarian, media development and technology sectors in a new collaboration that recognises information and two-way communication as key humanitarian deliverables.</p><p>This unique, cross sector initiative was set up in response to the policy paper <a href="http://downloads.bbc.co.uk/worldservice/trust/pdf/humanitarian_response_briefing.pdf">Left in the Dark</a>. This shows that those affected by disasters are often left out of the information and communication loop in emergency responses.</p><p>Yet information to, and communication with, affected people is essential – as a life-saving device, as key to enabling people to take ownership over their own recovery, and as critical to accountability and genuine participation. <a href="http://www.youtube.com/watch?feature=player_embedded&amp;v=ZDmKLcY7Nis">Communication is aid</a>. The CDAC Network recognises that two-way communication approaches, including through the appropriate use of media and technology, are underutilised in humanitarian responses.</p><p>There is no similar formal stakeholder group in the humanitarian sector and the CDAC Network does a number of things toward integrating and mainstreaming communication as aid. The Network focuses on the four strategic areas of <a href="http://www.cdacnetwork.org/public/about/convening">convening</a>, <a href="http://www.cdacnetwork.org/public/about/advocating">advocating</a>, <a href="http://www.cdacnetwork.org/public/about/learning">research and learning</a>, and <a href="http://www.cdacnetwork.org/public/about/strengthening-capacity">building capacity</a> to leverage change toward mainstreaming effective two-way communication between humanitarian responders and people affected by disasters. The Network’s <a href="http://www.cdacnetwork.org/public/about/vision-and-purpose">vision</a> is of change both within its own members and also the wider humanitarian sector.</p><p>For more information visit <a href="http://www.cdacnetwork.org">www.cdacnetwork.org</a> or email <a href="mailto:info@cdacnetwork.org">info@cdacnetwork.org</a></p>',
        ),
      ),
      'fr' => array(
        0 => array(
          'format' => 'full_html',
          'summary' => '',
          'value' => '<p style="text-align: center;"><img alt="CDAC Network" src="http://www.cdacnetwork.org/sites/www.cdacnetwork.org/themes/basic/images/CDAC-logo.png" /></p><p>Une collaboration intersectorielle entre les organisations humanitaires, les organisations des Nations Unies, le Mouvement de la Croix-Rouge, les organisations du secteur des média et de développement des nouvelles technologies et des initiatives sur la qualité et la responsabilité.</p><hr><p>Le Réseau de Communication avec les Communautés Affectées par les Catastrophes (CDAC) est une initiative novatrice qui rassemble l\'expertise de la communauté humanitaire, du secteur des média et de développement des nouvelles technologies dans une nouvelle collaboration qui reconnaît l\'information et la communication bidirectionnelle comme des produits humanitaires indispensables.</p><p>Cette initiative intersectorielle unique, a été mise en place en réponse au document d’orientation <a href="http://downloads.bbc.co.uk/worldservice/trust/pdf/humanitarian_response_briefing.pdf">Left in the Dark</a> (Laissé dans l’obscurité). Celui-ci  montre que ceux qui sont touchés par des catastrophes sont souvent les laissés pour compte de l\'information et de la communication dans les réponses d\'urgence.</p><p>Pourtant, l\'information à, et la communication avec, les personnes touchées est essentielle - comme un dispositif de sauvetage, comme un élément clé pour permettre aux personnes de prendre en charge leur propre rétablissement, essentielle aussi à la responsabilité et à une véritable approche participative. <a href="http://www.youtube.com/watch?feature=player_embedded&amp;v=ZDmKLcY7Nis">La communication est également de l\'assistance</a> (Communication is aid). Le Réseau CDAC reconnaît que les approches de communication bidirectionnelle, y compris par l\'utilisation appropriée des médias et de la technologie, sont sous-utilisés dans les réponses humanitaires.</p><p>Il n’existe pas un tel réseau «  officiel » dans le secteur humanitaire et le CDAC fait de grands efforts pour intégrer la communication comme partie prenante de l’assistance aux victimes. Le Réseau se concentre sur quatre domaines stratégiques: <a href="http://www.cdacnetwork.org/public/about/convening">le rassemblement</a>, <a href="http://www.cdacnetwork.org/public/about/advocating">le conseil</a>, <a href="http://www.cdacnetwork.org/public/about/learning">recherche et apprentissage</a>, ainsi que le <a href="http://www.cdacnetwork.org/public/about/strengthening-capacity">renforcement des capacités</a> pour induire le changement vers l\'intégration effective de la communication bidirectionnelle  entre les intervenants humanitaires et les personnes affectées par les catastrophes. Le réseau <a href="http://www.cdacnetwork.org/public/about/vision-and-purpose">vise</a> à encourager cette intitiative à la fois au sein de ses propres membres mais également à  l\'ensemble du secteur humanitaire.</p><p>Pour plus d\'informations visitez <a href="http://www.cdacnetwork.org">www.cdacnetwork.org</a> ou envoyez un courriel à <a href="mailto:info@cdacnetwork.org">info@cdacnetwork.org</a></p>',
        ),
      ),
    ),
    'cid' => '0',
    'comment' => '1',
    'comment_count' => '0',
    'language' => 'und',
    'last_comment_name' => NULL,
    'last_comment_uid' => '1',
    'log' => '',
    'path' => array(
      'alias' => 'resources/cdac-network',
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
    'title_field' => array(
      'en' => array(
        0 => array(
          'value' => 'CDAC Network',
        ),
      ),
      'fr' => array(
        0 => array(
          'value' => 'Réseau CDAC',
        ),
      ),
    ),
    'translate' => '0',
    'type' => 'page',
    'uid' => '1',
    'uuid' => '70684b57-84ea-0284-21dc-2aee75c77484',
  );

  return $entities;
}
