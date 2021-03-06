<!--.page -->
<div role="document" class="page">
<div class="inner-wrapper-calc">
  <!--.l-header -->
  <header role="banner" class="l-header">

     <div class="top-bar-most horizontal-menu">
       <div class="row">
        <div class="small-12 medium-8 columns">
          <?php if (!empty($page['topbar_section_1'])): ?>
            <?php print render($page['topbar_section_1']); ?>
          <?php endif; ?>
        </div>
        <div class="medium-4 hide-for-small-only columns">
          <?php if (!empty($page['topbar_section_2'])): ?>
            <?php print render($page['topbar_section_2']); ?>
          <?php endif; ?>
        </div>
      </div>
    </div>
    <?php if ($top_bar): ?>
      <!--.top-bar -->
      <?php if ($top_bar_classes): ?>
        <div class="<?php print $top_bar_classes; ?>">
      <?php endif; ?>
      <nav class="top-bar" data-topbar <?php print $top_bar_options; ?>>
        <ul class="title-area">
          <li class="name publicize-lettering show-for-small-only"><?php if ($site_slogan): ?><h1 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h1><?php endif; ?></li>
          <div class="left hide-for-small-only"><li class="name publicize-lettering center-middle-flex"><h1><?php print $linked_site_name; ?></h1></li></div>
          <div class="left hide-for-small-only"><li><?php if ($site_slogan): ?><h3 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h3><?php endif; ?></li></div>
          <li class="toggle-topbar menu-icon">
            <a href="#"><span><!-- <?php print $top_bar_menu_text; ?> --></span></a></li>
        </ul>

        <!-- <?php if (!empty($page['topbar_section_2'])): ?>
              <?php print render($page['topbar_section_2']); ?>
        <?php endif; ?> -->

        <section class="top-bar-section">
          <?php if ($top_bar_main_menu) : ?>
            <?php print $top_bar_main_menu; ?>
          <?php endif; ?>
        </section>
      </nav>
      <?php if ($top_bar_classes): ?>
        </div>
      <?php endif; ?>
      <!--/.top-bar -->
    <?php endif; ?>

    <!--.header-bg-image -->
    <?php if (!empty($page['header_bg_region'])): ?>
      <?php print render($page['header_bg_region']); ?>
    <?php endif; ?>

    <!-- Title, slogan and menu -->
    <?php if ($alt_header): ?>
      <section class="row <?php print $alt_header_classes; ?>">

        <?php if ($linked_logo): print $linked_logo; endif; ?>

        <?php if ($site_name): ?>
          <?php if ($title): ?>
            <div id="site-name" class="element-invisible">
              <strong>
                <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
              </strong>
            </div>
          <?php else: /* Use h1 when the content title is empty */ ?>
            <h1 id="site-name">
              <a href="<?php print $front_page; ?>" title="<?php print t('Home'); ?>" rel="home"><span><?php print $site_name; ?></span></a>
            </h1>
          <?php endif; ?>
        <?php endif; ?>

        <?php if ($site_slogan): ?>
          <h2 title="<?php print $site_slogan; ?>" class="site-slogan"><?php print $site_slogan; ?></h2>
        <?php endif; ?>

        <?php if ($alt_main_menu): ?>
          <nav id="main-menu" class="navigation" role="navigation">
            <?php print ($alt_main_menu); ?>
          </nav> <!-- /#main-menu -->
        <?php endif; ?>

        <?php if ($alt_secondary_menu): ?>
          <nav id="secondary-menu" class="navigation" role="navigation">
            <?php print $alt_secondary_menu; ?>
          </nav> <!-- /#secondary-menu -->
        <?php endif; ?>

      </section>
    <?php endif; ?>
    <!-- End title, slogan and menu -->

    <?php if (!empty($page['header'])): ?>
      <!--.l-header-region -->
      <section class="l-header-region row">
        <div class="columns">
          <?php print render($page['header']); ?>
        </div>
      </section>
      <!--/.l-header-region -->
    <?php endif; ?>

  </header>
  <!--/.l-header -->
  <div class="main-body-wrapper">
    <?php if (!empty($page['featured'])): ?>
      <!--.l-featured -->
      <section class="l-featured row">
        <div class="columns">
          <?php print render($page['featured']); ?>
        </div>
      </section>
      <!--/.l-featured -->
    <?php endif; ?>

    <?php if ($messages && !$zurb_foundation_messages_modal): ?>
      <!--.l-messages -->
      <section class="l-messages row">
        <div class="columns">
          <?php if ($messages): print $messages; endif; ?>
        </div>
      </section>
      <!--/.l-messages -->
    <?php endif; ?>

    <?php if (!empty($page['help'])): ?>
      <!--.l-help -->
      <section class="l-help row">
        <div class="columns">
          <?php print render($page['help']); ?>
        </div>
      </section>
      <!--/.l-help -->
    <?php endif; ?>

    <!--.l-main -->
    <main role="main" class="row l-main">
      <!-- .l-main region -->

      <div class="<?php print $main_grid; ?> main columns">
        <?php if (!empty($page['highlighted'])): ?>
          <div class="highlight panel callout">
            <?php print render($page['highlighted']); ?>
          </div>
        <?php endif; ?>

        <a id="main-content"></a>

        <!-- <?php if ($breadcrumb): print $breadcrumb; endif; ?>

        <?php if ($title && !$is_front): ?>
          <?php print render($title_prefix); ?>
          <h1 id="page-title" class="title"><?php print $title; ?></h1>
          <?php print render($title_suffix); ?>
        <?php endif; ?>

        <?php if (!empty($tabs)): ?>
          <?php print render($tabs); ?>
          <?php if (!empty($tabs2)): print render($tabs2); endif; ?>
        <?php endif; ?>

        <?php if ($action_links): ?>
          <ul class="action-links">
            <?php print render($action_links); ?>
          </ul>
        <?php endif; ?> -->

        <?php print render($page['content']); ?>
      </div>
      <!--/.l-main region -->

      <?php if (!empty($page['sidebar_first'])): ?>
        <aside role="complementary" class="<?php print $sidebar_first_grid; ?> sidebar-first columns sidebar">
           <hr class="visible-for-small-only sidebar-first">
          <?php print render($page['sidebar_first']); ?>
        </aside>
      <?php endif; ?>

      <?php if (!empty($page['sidebar_second'])): ?>
        <aside role="complementary" class="<?php print $sidebar_sec_grid; ?> sidebar-second columns sidebar">
          <hr class="visible-for-small-only sidebar-second">
          <?php print render($page['sidebar_second']); ?>
        </aside>
      <?php endif; ?>
    </main>
    <!--/.l-main -->

    <?php if (!empty($page['triptych_first']) || !empty($page['triptych_middle']) || !empty($page['triptych_last'])): ?>
      <!--.triptych-->
      <section class="l-triptych row">
        <div class="triptych-first medium-4 columns">
          <?php print render($page['triptych_first']); ?>
        </div>
        <div class="triptych-middle medium-4 columns">
          <?php print render($page['triptych_middle']); ?>
        </div>
        <div class="triptych-last medium-4 columns">
          <?php print render($page['triptych_last']); ?>
        </div>
      </section>
      <!--/.triptych -->
    <?php endif; ?>
    <!--.full-section-->
    <?php if (!empty($page['full_section'])): ?>

      <section class="full-section kill-margin">
        <div class="row">
          <div class="columns">
            <?php print render($page['full_section']); ?>
          </div>
      </div>
      </section>

    <?php endif; ?>
      <!--/.full-section-->




    <?php if ($messages && $zurb_foundation_messages_modal): print $messages; endif; ?>
  </div><!--/.main-body-wrapper -->
</div>
</div>
<!--/.page -->
<!--.l-footer -->
<footer class="l-footer panel" role="contentinfo">

  <?php if (!empty($page['footer_firstcolumn']) || !empty($page['footer_secondcolumn']) || !empty($page['footer_thirdcolumn']) || !empty($page['footer_fourthcolumn'])): ?>
      <!--.footer-columns -->
      <section class="row l-footer-columns">
        <?php if (!empty($page['footer_firstcolumn'])): ?>
          <div class="footer-first medium-3 columns">
            <?php print render($page['footer_firstcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_secondcolumn'])): ?>
          <div class="footer-second medium-3 columns">
            <?php print render($page['footer_secondcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_thirdcolumn'])): ?>
          <div class="footer-third medium-3 columns">
            <?php print render($page['footer_thirdcolumn']); ?>
          </div>
        <?php endif; ?>
        <?php if (!empty($page['footer_fourthcolumn'])): ?>
          <div class="footer-fourth medium-3 columns">
            <?php print render($page['footer_fourthcolumn']); ?>
          </div>
        <?php endif; ?>
      </section>
      <!--/.footer-columns-->
    <?php endif; ?>

  <?php if (!empty($page['footer'])): ?>
    <div class="footer columns">
      <?php print render($page['footer']); ?>
    </div>
  <?php endif; ?>

  <!--<?php if ($site_name) : ?>
    <div class="copyright columns">
      &copy; <?php print date('Y') . ' ' . $site_name . ' ' . t('All rights reserved.'); ?>
    </div>
  <?php endif; ?> -->
</footer>
<!--/.l-footer -->
