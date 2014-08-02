




<!DOCTYPE html>
<html class="   ">
  <head prefix="og: http://ogp.me/ns# fb: http://ogp.me/ns/fb# object: http://ogp.me/ns/object# article: http://ogp.me/ns/article# profile: http://ogp.me/ns/profile#">
    <meta charset='utf-8'>
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    
    
    <title>gcc/riemann_zeta.tcc at master · mirrors/gcc · GitHub</title>
    <link rel="search" type="application/opensearchdescription+xml" href="/opensearch.xml" title="GitHub">
    <link rel="fluid-icon" href="https://github.com/fluidicon.png" title="GitHub">
    <link rel="apple-touch-icon" sizes="57x57" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="114x114" href="/apple-touch-icon-114.png">
    <link rel="apple-touch-icon" sizes="72x72" href="/apple-touch-icon-144.png">
    <link rel="apple-touch-icon" sizes="144x144" href="/apple-touch-icon-144.png">
    <meta property="fb:app_id" content="1401488693436528">

      <meta content="@github" name="twitter:site" /><meta content="summary" name="twitter:card" /><meta content="mirrors/gcc" name="twitter:title" /><meta content="Contribute to gcc development by creating an account on GitHub." name="twitter:description" /><meta content="https://avatars1.githubusercontent.com/u/28013?v=1&amp;s=400" name="twitter:image:src" />
<meta content="GitHub" property="og:site_name" /><meta content="object" property="og:type" /><meta content="https://avatars1.githubusercontent.com/u/28013?v=1&amp;s=400" property="og:image" /><meta content="mirrors/gcc" property="og:title" /><meta content="https://github.com/mirrors/gcc" property="og:url" /><meta content="Contribute to gcc development by creating an account on GitHub." property="og:description" />

    <link rel="assets" href="https://assets-cdn.github.com/">
    <link rel="conduit-xhr" href="https://ghconduit.com:25035">
    

    <meta name="msapplication-TileImage" content="/windows-tile.png">
    <meta name="msapplication-TileColor" content="#ffffff">
    <meta name="selected-link" value="repo_source" data-pjax-transient>
      <meta name="google-analytics" content="UA-3769691-2">

    <meta content="collector.githubapp.com" name="octolytics-host" /><meta content="collector-cdn.github.com" name="octolytics-script-host" /><meta content="github" name="octolytics-app-id" /><meta content="84BB2867:0440:1086F87:53DCFEFC" name="octolytics-dimension-request_id" />
    

    
    
    <link rel="icon" type="image/x-icon" href="https://assets-cdn.github.com/favicon.ico">


    <meta content="authenticity_token" name="csrf-param" />
<meta content="G5vLjmNxtiosSTjGVK6bXmr+zCtqvoYx4CaLLs1TkRKoptiQ3D8+bZxi2aGkMP8BRdvt+51cnfzy5gSCheU+lg==" name="csrf-token" />

    <link href="https://assets-cdn.github.com/assets/github-8488336393a59083828e685a8702f8734352719a.css" media="all" rel="stylesheet" type="text/css" />
    <link href="https://assets-cdn.github.com/assets/github2-2d1d846490aa051f4e4f6e135987b5980e9b29f5.css" media="all" rel="stylesheet" type="text/css" />
    


    <meta http-equiv="x-pjax-version" content="02f93ae1c75aaa2c7500aa04ab09b787">

      
  <meta name="description" content="Contribute to gcc development by creating an account on GitHub.">


  <meta content="28013" name="octolytics-dimension-user_id" /><meta content="mirrors" name="octolytics-dimension-user_login" /><meta content="1377912" name="octolytics-dimension-repository_id" /><meta content="mirrors/gcc" name="octolytics-dimension-repository_nwo" /><meta content="true" name="octolytics-dimension-repository_public" /><meta content="false" name="octolytics-dimension-repository_is_fork" /><meta content="1377912" name="octolytics-dimension-repository_network_root_id" /><meta content="mirrors/gcc" name="octolytics-dimension-repository_network_root_nwo" />

  <link href="https://github.com/mirrors/gcc/commits/master.atom" rel="alternate" title="Recent Commits to gcc:master" type="application/atom+xml">

  </head>


  <body class="logged_out  env-production  vis-public mirror  page-blob">
    <a href="#start-of-content" tabindex="1" class="accessibility-aid js-skip-to-content">Skip to content</a>
    <div class="wrapper">
      
      
      
      


      
      <div class="header header-logged-out">
  <div class="container clearfix">

    <a class="header-logo-wordmark" href="https://github.com/">
      <span class="mega-octicon octicon-logo-github"></span>
    </a>

    <div class="header-actions">
        <a class="button primary" href="/join">Sign up</a>
      <a class="button signin" href="/login?return_to=%2Fmirrors%2Fgcc%2Fblob%2Fmaster%2Flibstdc%252B%252B-v3%2Finclude%2Ftr1%2Friemann_zeta.tcc">Sign in</a>
    </div>

    <div class="command-bar js-command-bar  in-repository">

      <ul class="top-nav">
          <li class="explore"><a href="/explore">Explore</a></li>
          <li class="features"><a href="/features">Features</a></li>
          <li class="enterprise"><a href="https://enterprise.github.com/">Enterprise</a></li>
          <li class="blog"><a href="/blog">Blog</a></li>
      </ul>
        <form accept-charset="UTF-8" action="/search" class="command-bar-form" id="top_search_form" method="get">

<div class="commandbar">
  <span class="message"></span>
  <input type="text" data-hotkey="s, /" name="q" id="js-command-bar-field" placeholder="Search or type a command" tabindex="1" autocapitalize="off"
    
    
    data-repo="mirrors/gcc"
  >
  <div class="display hidden"></div>
</div>

    <input type="hidden" name="nwo" value="mirrors/gcc">

    <div class="select-menu js-menu-container js-select-menu search-context-select-menu">
      <span class="minibutton select-menu-button js-menu-target" role="button" aria-haspopup="true">
        <span class="js-select-button">This repository</span>
      </span>

      <div class="select-menu-modal-holder js-menu-content js-navigation-container" aria-hidden="true">
        <div class="select-menu-modal">

          <div class="select-menu-item js-navigation-item js-this-repository-navigation-item selected">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" class="js-search-this-repository" name="search_target" value="repository" checked="checked">
            <div class="select-menu-item-text js-select-button-text">This repository</div>
          </div> <!-- /.select-menu-item -->

          <div class="select-menu-item js-navigation-item js-all-repositories-navigation-item">
            <span class="select-menu-item-icon octicon octicon-check"></span>
            <input type="radio" name="search_target" value="global">
            <div class="select-menu-item-text js-select-button-text">All repositories</div>
          </div> <!-- /.select-menu-item -->

        </div>
      </div>
    </div>

  <span class="help tooltipped tooltipped-s" aria-label="Show command bar help">
    <span class="octicon octicon-question"></span>
  </span>


  <input type="hidden" name="ref" value="cmdform">

</form>
    </div>

  </div>
</div>



      <div id="start-of-content" class="accessibility-aid"></div>
          <div class="site" itemscope itemtype="http://schema.org/WebPage">
    <div id="js-flash-container">
      
    </div>
    <div class="pagehead repohead instapaper_ignore readability-menu">
      <div class="container">
        
<ul class="pagehead-actions">


  <li>
      <a href="/login?return_to=%2Fmirrors%2Fgcc"
    class="minibutton with-count star-button tooltipped tooltipped-n"
    aria-label="You must be signed in to star a repository" rel="nofollow">
    <span class="octicon octicon-star"></span>
    Star
  </a>

    <a class="social-count js-social-count" href="/mirrors/gcc/stargazers">
      390
    </a>

  </li>

    <li>
      <a href="/login?return_to=%2Fmirrors%2Fgcc"
        class="minibutton with-count js-toggler-target fork-button tooltipped tooltipped-n"
        aria-label="You must be signed in to fork a repository" rel="nofollow">
        <span class="octicon octicon-repo-forked"></span>
        Fork
      </a>
      <a href="/mirrors/gcc/network" class="social-count">
        216
      </a>
    </li>
</ul>

        <h1 itemscope itemtype="http://data-vocabulary.org/Breadcrumb" class="entry-title public">
          <span class="mega-octicon octicon-mirror"></span>
          <span class="author"><a href="/mirrors" class="url fn" itemprop="url" rel="author"><span itemprop="title">mirrors</span></a></span><!--
       --><span class="path-divider">/</span><!--
       --><strong><a href="/mirrors/gcc" class="js-current-repository js-repo-home-link">gcc</a></strong>

          <span class="page-context-loader">
            <img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
          </span>

            <span class="mirror-flag">
              <span class="text">mirrored from <a href="git://gcc.gnu.org/git/gcc.git">git://gcc.gnu.org/git/gcc.git</a></span>
            </span>
        </h1>
      </div><!-- /.container -->
    </div><!-- /.repohead -->

    <div class="container">
      <div class="repository-with-sidebar repo-container new-discussion-timeline  ">
        <div class="repository-sidebar clearfix">
            

<div class="sunken-menu vertical-right repo-nav js-repo-nav js-repository-container-pjax js-octicon-loaders" data-issue-count-url="/mirrors/gcc/issues/counts">
  <div class="sunken-menu-contents">
    <ul class="sunken-menu-group">
      <li class="tooltipped tooltipped-w" aria-label="Code">
        <a href="/mirrors/gcc" aria-label="Code" class="selected js-selected-navigation-item sunken-menu-item" data-hotkey="g c" data-pjax="true" data-selected-links="repo_source repo_downloads repo_commits repo_releases repo_tags repo_branches /mirrors/gcc">
          <span class="octicon octicon-code"></span> <span class="full-word">Code</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

        <li class="tooltipped tooltipped-w" aria-label="Issues">
          <a href="/mirrors/gcc/issues" aria-label="Issues" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g i" data-selected-links="repo_issues repo_labels repo_milestones /mirrors/gcc/issues">
            <span class="octicon octicon-issue-opened"></span> <span class="full-word">Issues</span>
            <span class="js-issue-replace-counter"></span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>        </li>

      <li class="tooltipped tooltipped-w" aria-label="Pull Requests">
        <a href="/mirrors/gcc/pulls" aria-label="Pull Requests" class="js-selected-navigation-item sunken-menu-item js-disable-pjax" data-hotkey="g p" data-selected-links="repo_pulls /mirrors/gcc/pulls">
            <span class="octicon octicon-git-pull-request"></span> <span class="full-word">Pull Requests</span>
            <span class="js-pull-replace-counter"></span>
            <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>


    </ul>
    <div class="sunken-menu-separator"></div>
    <ul class="sunken-menu-group">

      <li class="tooltipped tooltipped-w" aria-label="Pulse">
        <a href="/mirrors/gcc/pulse" aria-label="Pulse" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="pulse /mirrors/gcc/pulse">
          <span class="octicon octicon-pulse"></span> <span class="full-word">Pulse</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>

      <li class="tooltipped tooltipped-w" aria-label="Graphs">
        <a href="/mirrors/gcc/graphs" aria-label="Graphs" class="js-selected-navigation-item sunken-menu-item" data-pjax="true" data-selected-links="repo_graphs repo_contributors /mirrors/gcc/graphs">
          <span class="octicon octicon-graph"></span> <span class="full-word">Graphs</span>
          <img alt="" class="mini-loader" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32.gif" width="16" />
</a>      </li>
    </ul>


  </div>
</div>

              <div class="only-with-full-nav">
                

  

<div class="clone-url open"
  data-protocol-type="http"
  data-url="/users/set_protocol?protocol_selector=http&amp;protocol_type=clone">
  <h3><strong>HTTPS</strong> clone URL</h3>
  <div class="input-group">
    <input type="text" class="input-mini input-monospace js-url-field"
           value="https://github.com/mirrors/gcc.git" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/mirrors/gcc.git" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>

  

<div class="clone-url "
  data-protocol-type="subversion"
  data-url="/users/set_protocol?protocol_selector=subversion&amp;protocol_type=clone">
  <h3><strong>Subversion</strong> checkout URL</h3>
  <div class="input-group">
    <input type="text" class="input-mini input-monospace js-url-field"
           value="https://github.com/mirrors/gcc" readonly="readonly">
    <span class="input-group-button">
      <button aria-label="Copy to clipboard" class="js-zeroclipboard minibutton zeroclipboard-button" data-clipboard-text="https://github.com/mirrors/gcc" data-copied-hint="Copied!" type="button"><span class="octicon octicon-clippy"></span></button>
    </span>
  </div>
</div>


<p class="clone-options">You can clone with
      <a href="#" class="js-clone-selector" data-protocol="http">HTTPS</a>
      or <a href="#" class="js-clone-selector" data-protocol="subversion">Subversion</a>.
  <a href="https://help.github.com/articles/which-remote-url-should-i-use" class="help tooltipped tooltipped-n" aria-label="Get help on which URL is right for you.">
    <span class="octicon octicon-question"></span>
  </a>
</p>



                <a href="/mirrors/gcc/archive/master.zip"
                   class="minibutton sidebar-button"
                   aria-label="Download mirrors/gcc as a zip file"
                   title="Download mirrors/gcc as a zip file"
                   rel="nofollow">
                  <span class="octicon octicon-cloud-download"></span>
                  Download ZIP
                </a>
              </div>
        </div><!-- /.repository-sidebar -->

        <div id="js-repo-pjax-container" class="repository-content context-loader-container" data-pjax-container>
          


<a href="/mirrors/gcc/blob/06ecf4884b35f5ee5b211f0c2f753d5d4eee2481/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc" class="hidden js-permalink-shortcut" data-hotkey="y">Permalink</a>

<!-- blob contrib key: blob_contributors:v21:3cfd33c4fb5af6a9193059ead1375936 -->

<div class="file-navigation">
  

<div class="select-menu js-menu-container js-select-menu" >
  <span class="minibutton select-menu-button js-menu-target css-truncate" data-hotkey="w"
    data-master-branch="master"
    data-ref="master"
    title="master"
    role="button" aria-label="Switch branches or tags" tabindex="0" aria-haspopup="true">
    <span class="octicon octicon-git-branch"></span>
    <i>branch:</i>
    <span class="js-select-button css-truncate-target">master</span>
  </span>

  <div class="select-menu-modal-holder js-menu-content js-navigation-container" data-pjax aria-hidden="true">

    <div class="select-menu-modal">
      <div class="select-menu-header">
        <span class="select-menu-title">Switch branches/tags</span>
        <span class="octicon octicon-x js-menu-close" role="button" aria-label="Close"></span>
      </div> <!-- /.select-menu-header -->

      <div class="select-menu-filters">
        <div class="select-menu-text-filter">
          <input type="text" aria-label="Filter branches/tags" id="context-commitish-filter-field" class="js-filterable-field js-navigation-enable" placeholder="Filter branches/tags">
        </div>
        <div class="select-menu-tabs">
          <ul>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="branches" class="js-select-menu-tab">Branches</a>
            </li>
            <li class="select-menu-tab">
              <a href="#" data-tab-filter="tags" class="js-select-menu-tab">Tags</a>
            </li>
          </ul>
        </div><!-- /.select-menu-tabs -->
      </div><!-- /.select-menu-filters -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="branches">

        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/cilk-in-gomp/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/cilk-in-gomp"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/cilk-in-gomp">aldyh/cilk-in-gomp</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/cilk-simd-merge/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/cilk-simd-merge"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/cilk-simd-merge">aldyh/cilk-simd-merge</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/cilkplus-simd-rewrite/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/cilkplus-simd-rewrite"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/cilkplus-simd-rewrite">aldyh/cilkplus-simd-rewrite</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/test1/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/test1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/test1">aldyh/test1</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/uninst/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/uninst"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/uninst">aldyh/uninst</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/aldyh/uninst-2/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="aldyh/uninst-2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="aldyh/uninst-2">aldyh/uninst-2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/apinski/bytewiseunop/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="apinski/bytewiseunop"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="apinski/bytewiseunop">apinski/bytewiseunop</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/archer-expr-plugin/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="archer-expr-plugin"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="archer-expr-plugin">archer-expr-plugin</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/asan/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="asan"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="asan">asan</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/asutton/c++-concepts/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="asutton/c++-concepts"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="asutton/c++-concepts">asutton/c++-concepts</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/avx2/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="avx2"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="avx2">avx2</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/balaji/cilkplus-merge/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="balaji/cilkplus-merge"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="balaji/cilkplus-merge">balaji/cilkplus-merge</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/bkoz/gsoc-regex/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="bkoz/gsoc-regex"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="bkoz/gsoc-regex">bkoz/gsoc-regex</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/bviyer/cilkplus-multilib-test/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="bviyer/cilkplus-multilib-test"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="bviyer/cilkplus-multilib-test">bviyer/cilkplus-multilib-test</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cilkplus/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cilkplus"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cilkplus">cilkplus</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cilkplus-4_7-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cilkplus-4_7-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cilkplus-4_7-branch">cilkplus-4_7-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cilkplus-4_8-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cilkplus-4_8-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cilkplus-4_8-branch">cilkplus-4_8-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cilkplus-merge/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cilkplus-merge"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cilkplus-merge">cilkplus-merge</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/constexpr/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="constexpr"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="constexpr">constexpr</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/ctice/vtv/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="ctice/vtv"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="ctice/vtv">ctice/vtv</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cxx-conversion/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cxx-conversion"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cxx-conversion">cxx-conversion</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/cxx-mem-model/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="cxx-mem-model"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="cxx-mem-model">cxx-mem-model</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/dmalcolm/jit/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="dmalcolm/jit"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="dmalcolm/jit">dmalcolm/jit</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/dnovillo/cxx-conversion/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="dnovillo/cxx-conversion"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="dnovillo/cxx-conversion">dnovillo/cxx-conversion</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/dnovillo/vec-rewrite/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="dnovillo/vec-rewrite"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="dnovillo/vec-rewrite">dnovillo/vec-rewrite</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/dodji/abi-instr/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="dodji/abi-instr"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="dodji/abi-instr">dodji/abi-instr</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/dodji/asan-merge-assemble/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="dodji/asan-merge-assemble"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="dodji/asan-merge-assemble">dodji/asan-merge-assemble</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/fortran-dev/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="fortran-dev"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="fortran-dev">fortran-dev</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gc-improv/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gc-improv"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gc-improv">gc-improv</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_0-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0-branch">gcc-4_0-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_1-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_1-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_1-branch">gcc-4_1-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_2-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2-branch">gcc-4_2-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_3-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3-branch">gcc-4_3-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_4-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4-branch">gcc-4_4-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_5-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5-branch">gcc-4_5-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_6-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6-branch">gcc-4_6-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_7-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_7-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_7-branch">gcc-4_7-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_8-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_8-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_8-branch">gcc-4_8-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gcc-4_9-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_9-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_9-branch">gcc-4_9-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gccgo/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gccgo"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gccgo">gccgo</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gccpy/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gccpy"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gccpy">gccpy</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gccrs/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gccrs"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gccrs">gccrs</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/gimple-front-end/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gimple-front-end"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gimple-front-end">gimple-front-end</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/google/debugfission/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="google/debugfission"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="google/debugfission">google/debugfission</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/graphite/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="graphite"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="graphite">graphite</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/arch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/arch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/arch">hjl/arch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/asan/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/asan"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/asan">hjl/asan</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/gcc-4_7-branch/pr53768/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/gcc-4_7-branch/pr53768"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/gcc-4_7-branch/pr53768">hjl/gcc-4_7-branch/pr53768</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/gold/gcc-4_6-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/gold/gcc-4_6-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/gold/gcc-4_6-branch">hjl/gold/gcc-4_6-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/gold/gcc-4_7-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/gold/gcc-4_7-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/gold/gcc-4_7-branch">hjl/gold/gcc-4_7-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/gold/gcc-4_8-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/gold/gcc-4_8-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/gold/gcc-4_8-branch">hjl/gold/gcc-4_8-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/gold/master/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/gold/master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/gold/master">hjl/gold/master</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/libsanitizer/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/libsanitizer"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/libsanitizer">hjl/libsanitizer</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/lra/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/lra"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/lra">hjl/lra</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/pr54037/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/pr54037"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/pr54037">hjl/pr54037</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/subreg/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/subreg"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/subreg">hjl/subreg</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/subreg-class/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/subreg-class"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/subreg-class">hjl/subreg-class</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/tsx/gcc-4_7-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/tsx/gcc-4_7-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/tsx/gcc-4_7-branch">hjl/tsx/gcc-4_7-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/ada/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/ada"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/ada">hjl/x32/ada</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/addr32/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/addr32"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/addr32">hjl/x32/addr32</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/gcc-4_6-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/gcc-4_6-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/gcc-4_6-branch">hjl/x32/gcc-4_6-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/gcc-4_6-branch+ada+java+go/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/gcc-4_6-branch+ada+java+go"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/gcc-4_6-branch+ada+java+go">hjl/x32/gcc-4_6-branch+ada+java+go</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/gcc-4_6-branch+mx32/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/gcc-4_6-branch+mx32"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/gcc-4_6-branch+mx32">hjl/x32/gcc-4_6-branch+mx32</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/gcc-4_7-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/gcc-4_7-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/gcc-4_7-branch">hjl/x32/gcc-4_7-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/gcc-4_8-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/gcc-4_8-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/gcc-4_8-branch">hjl/x32/gcc-4_8-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/go/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/go"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/go">hjl/x32/go</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/java/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/java"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/java">hjl/x32/java</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/longmode/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/longmode"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/longmode">hjl/x32/longmode</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x32/mx32/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x32/mx32"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x32/mx32">hjl/x32/mx32</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x86/gcc-4_8-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x86/gcc-4_8-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x86/gcc-4_8-branch">hjl/x86/gcc-4_8-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hjl/x86/m16/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hjl/x86/m16"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hjl/x86/m16">hjl/x86/m16</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/hsa/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="hsa"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="hsa">hsa</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/ienkovic/mpx/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="ienkovic/mpx"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="ienkovic/mpx">ienkovic/mpx</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/ifunc/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="ifunc"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="ifunc">ifunc</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/jason/4.6-cxx0x/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="jason/4.6-cxx0x"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="jason/4.6-cxx0x">jason/4.6-cxx0x</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/jason/alias-decl/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="jason/alias-decl"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="jason/alias-decl">jason/alias-decl</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/jason/comdat-debug/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="jason/comdat-debug"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="jason/comdat-debug">jason/comdat-debug</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/kyukhin/gomp4-offload/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="kyukhin/gomp4-offload"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="kyukhin/gomp4-offload">kyukhin/gomp4-offload</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/linaro-dev/sched-model-prefetch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="linaro-dev/sched-model-prefetch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="linaro-dev/sched-model-prefetch">linaro-dev/sched-model-prefetch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/lw-ipo/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="lw-ipo"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="lw-ipo">lw-ipo</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item selected">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/master/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="master"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="master">master</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/melt-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="melt-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="melt-branch">melt-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/microblaze/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="microblaze"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="microblaze">microblaze</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/pinskia/bytewiseunop/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="pinskia/bytewiseunop"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pinskia/bytewiseunop">pinskia/bytewiseunop</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/pinskia/newtreefold/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="pinskia/newtreefold"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pinskia/newtreefold">pinskia/newtreefold</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/pinskia/treecombine/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="pinskia/treecombine"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pinskia/treecombine">pinskia/treecombine</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/pph/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="pph"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="pph">pph</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/profile-stdlib/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="profile-stdlib"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="profile-stdlib">profile-stdlib</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/python/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="python"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="python">python</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/reload-v2a/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="reload-v2a"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="reload-v2a">reload-v2a</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/rth/avr-addressing/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="rth/avr-addressing"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="rth/avr-addressing">rth/avr-addressing</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/rth/gomp4/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="rth/gomp4"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="rth/gomp4">rth/gomp4</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/split/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="split"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="split">split</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/spu-4_5-branch/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="spu-4_5-branch"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="spu-4_5-branch">spu-4_5-branch</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/sterling/google-accel-tables-4_7/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="sterling/google-accel-tables-4_7"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="sterling/google-accel-tables-4_7">sterling/google-accel-tables-4_7</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/tbsaunde/bitmap/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="tbsaunde/bitmap"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="tbsaunde/bitmap">tbsaunde/bitmap</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/transactional-memory/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="transactional-memory"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="transactional-memory">transactional-memory</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/tromey/auto-dependency-checking/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="tromey/auto-dependency-checking"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="tromey/auto-dependency-checking">tromey/auto-dependency-checking</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/trunk/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="trunk"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="trunk">trunk</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/tschwinge/t/hurd/go/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="tschwinge/t/hurd/go"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="tschwinge/t/hurd/go">tschwinge/t/hurd/go</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/ubsan/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="ubsan"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="ubsan">ubsan</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/vect256/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="vect256"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="vect256">vect256</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/vries/fuse-caller-save/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="vries/fuse-caller-save"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="vries/fuse-caller-save">vries/fuse-caller-save</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/vtv/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="vtv"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="vtv">vtv</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/blob/x32/libstdc++-v3/include/tr1/riemann_zeta.tcc"
                 data-name="x32"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="x32">x32</a>
            </div> <!-- /.select-menu-item -->
        </div>

          <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

      <div class="select-menu-list select-menu-tab-bucket js-select-menu-tab-bucket" data-tab-filter="tags">
        <div data-filterable-for="context-commitish-filter-field" data-filterable-type="substring">


            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_9_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_9_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_9_0-release">gcc-4_9_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_8_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_8_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_8_2-release">gcc-4_8_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_8_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_8_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_8_1-release">gcc-4_8_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_8_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_8_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_8_0-release">gcc-4_8_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_7_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_7_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_7_3-release">gcc-4_7_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_7_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_7_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_7_2-release">gcc-4_7_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_7_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_7_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_7_1-release">gcc-4_7_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_7_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_7_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_7_0-release">gcc-4_7_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_6_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6_4-release">gcc-4_6_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_6_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6_3-release">gcc-4_6_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_6_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6_2-release">gcc-4_6_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_6_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6_1-release">gcc-4_6_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_6_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_6_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_6_0-release">gcc-4_6_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_5_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5_4-release">gcc-4_5_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_5_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5_3-release">gcc-4_5_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_5_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5_2-release">gcc-4_5_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_5_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5_1-release">gcc-4_5_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_5_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_5_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_5_0-release">gcc-4_5_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_7-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_7-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_7-release">gcc-4_4_7-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_6-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_6-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_6-release">gcc-4_4_6-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_5-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_5-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_5-release">gcc-4_4_5-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_4-release">gcc-4_4_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_3-release">gcc-4_4_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_2-release">gcc-4_4_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_1-release">gcc-4_4_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_4_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_4_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_4_0-release">gcc-4_4_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_6-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_6-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_6-release">gcc-4_3_6-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_5-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_5-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_5-release">gcc-4_3_5-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_4-release">gcc-4_3_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_3-release">gcc-4_3_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_2-release">gcc-4_3_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_1-release">gcc-4_3_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_3_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_3_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_3_0-release">gcc-4_3_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_2_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2_4-release">gcc-4_2_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_2_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2_3-release">gcc-4_2_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_2_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2_2-release">gcc-4_2_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_2_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2_1-release">gcc-4_2_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_2_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_2_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_2_0-release">gcc-4_2_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_1_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_1_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_1_2-release">gcc-4_1_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_1_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_1_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_1_1-release">gcc-4_1_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_1_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_1_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_1_0-release">gcc-4_1_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_0_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0_4-release">gcc-4_0_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_0_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0_3-release">gcc-4_0_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_0_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0_2-release">gcc-4_0_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_0_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0_1-release">gcc-4_0_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-4_0_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-4_0_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-4_0_0-release">gcc-4_0_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_6-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_6-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_6-release">gcc-3_4_6-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_5-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_5-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_5-release">gcc-3_4_5-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_4-release">gcc-3_4_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_3-release">gcc-3_4_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_2-release">gcc-3_4_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_1-release">gcc-3_4_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_4_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_4_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_4_0-release">gcc-3_4_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_3_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_3_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_3_4-release">gcc-3_3_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_3_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_3_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_3_3-release">gcc-3_3_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_3_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_3_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_3_2-release">gcc-3_3_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_2-release">gcc-3_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_2_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_2_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_2_3-release">gcc-3_2_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_2_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_2_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_2_2-release">gcc-3_2_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_2_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_2_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_2_1-release">gcc-3_2_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_1-release">gcc-3_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_1_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_1_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_1_1-release">gcc-3_1_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_0-release">gcc-3_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_0_4-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_0_4-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_0_4-release">gcc-3_0_4-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_0_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_0_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_0_3-release">gcc-3_0_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_0_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_0_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_0_2-release">gcc-3_0_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-3_0_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-3_0_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-3_0_1-release">gcc-3_0_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_95-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_95-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_95-release">gcc-2_95-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_95_3-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_95_3-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_95_3-release">gcc-2_95_3-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_95_2-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_95_2-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_95_2-release">gcc-2_95_2-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_95_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_95_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_95_1-release">gcc-2_95_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_8_1-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_8_1-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_8_1-release">gcc-2_8_1-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/gcc-2_8_0-release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="gcc-2_8_0-release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="gcc-2_8_0-release">gcc-2_8_0-release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_1_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_1_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_1_release">egcs_1_1_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_1_2_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_1_2_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_1_2_release">egcs_1_1_2_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_1_1_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_1_1_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_1_1_release">egcs_1_1_1_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_0_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_0_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_0_release">egcs_1_0_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_0_3_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_0_3_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_0_3_release">egcs_1_0_3_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_0_2_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_0_2_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_0_2_release">egcs_1_0_2_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/egcs_1_0_1_release/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="egcs_1_0_1_release"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="egcs_1_0_1_release">egcs_1_0_1_release</a>
            </div> <!-- /.select-menu-item -->
            <div class="select-menu-item js-navigation-item ">
              <span class="select-menu-item-icon octicon octicon-check"></span>
              <a href="/mirrors/gcc/tree/alpha-v0.1/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc"
                 data-name="alpha-v0.1"
                 data-skip-pjax="true"
                 rel="nofollow"
                 class="js-navigation-open select-menu-item-text css-truncate-target"
                 title="alpha-v0.1">alpha-v0.1</a>
            </div> <!-- /.select-menu-item -->
        </div>

        <div class="select-menu-no-results">Nothing to show</div>
      </div> <!-- /.select-menu-list -->

    </div> <!-- /.select-menu-modal -->
  </div> <!-- /.select-menu-modal-holder -->
</div> <!-- /.select-menu -->

  <div class="button-group right">
    <a href="/mirrors/gcc/find/master"
          class="js-show-file-finder minibutton empty-icon tooltipped tooltipped-s"
          data-pjax
          data-hotkey="t"
          aria-label="Quickly jump between files">
      <span class="octicon octicon-list-unordered"></span>
    </a>
    <button class="js-zeroclipboard minibutton zeroclipboard-button"
          data-clipboard-text="libstdc++-v3/include/tr1/riemann_zeta.tcc"
          aria-label="Copy to clipboard"
          data-copied-hint="Copied!">
      <span class="octicon octicon-clippy"></span>
    </button>
  </div>

  <div class="breadcrumb">
    <span class='repo-root js-repo-root'><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mirrors/gcc" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">gcc</span></a></span></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mirrors/gcc/tree/master/libstdc%2B%2B-v3" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">libstdc++-v3</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mirrors/gcc/tree/master/libstdc%2B%2B-v3/include" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">include</span></a></span><span class="separator"> / </span><span itemscope="" itemtype="http://data-vocabulary.org/Breadcrumb"><a href="/mirrors/gcc/tree/master/libstdc%2B%2B-v3/include/tr1" data-branch="master" data-direction="back" data-pjax="true" itemscope="url"><span itemprop="title">tr1</span></a></span><span class="separator"> / </span><strong class="final-path">riemann_zeta.tcc</strong>
  </div>
</div>


  <div class="commit commit-loader file-history-tease js-deferred-content" data-url="/mirrors/gcc/contributors/master/libstdc++-v3/include/tr1/riemann_zeta.tcc">
    Fetching contributors…

    <div class="participation">
      <p class="loader-loading"><img alt="" height="16" src="https://assets-cdn.github.com/images/spinners/octocat-spinner-32-EAF2F5.gif" width="16" /></p>
      <p class="loader-error">Cannot retrieve contributors at this time</p>
    </div>
  </div>

<div class="file-box">
  <div class="file">
    <div class="meta clearfix">
      <div class="info file-name">
          <span>434 lines (394 sloc)</span>
          <span class="meta-divider"></span>
        <span>13.664 kb</span>
      </div>
      <div class="actions">
        <div class="button-group">
          <a href="/mirrors/gcc/raw/master/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc" class="minibutton " id="raw-url">Raw</a>
            <a href="/mirrors/gcc/blame/master/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc" class="minibutton js-update-url-with-hash">Blame</a>
          <a href="/mirrors/gcc/commits/master/libstdc%2B%2B-v3/include/tr1/riemann_zeta.tcc" class="minibutton " rel="nofollow">History</a>
        </div><!-- /.button-group -->


            <a class="octicon-button disabled tooltipped tooltipped-w" href="#"
               aria-label="You must be signed in to make or propose changes"><span class="octicon octicon-pencil"></span></a>

          <a class="octicon-button danger disabled tooltipped tooltipped-w" href="#"
             aria-label="You must be signed in to make or propose changes">
          <span class="octicon octicon-trashcan"></span>
        </a>
      </div><!-- /.actions -->
    </div>
      
  <div class="blob-wrapper data type-c">
       <table class="file-code file-diff tab-size-8">
         <tr class="file-code-line">
           <td class="blob-line-nums">
             <span id="L1" rel="#L1">1</span>
<span id="L2" rel="#L2">2</span>
<span id="L3" rel="#L3">3</span>
<span id="L4" rel="#L4">4</span>
<span id="L5" rel="#L5">5</span>
<span id="L6" rel="#L6">6</span>
<span id="L7" rel="#L7">7</span>
<span id="L8" rel="#L8">8</span>
<span id="L9" rel="#L9">9</span>
<span id="L10" rel="#L10">10</span>
<span id="L11" rel="#L11">11</span>
<span id="L12" rel="#L12">12</span>
<span id="L13" rel="#L13">13</span>
<span id="L14" rel="#L14">14</span>
<span id="L15" rel="#L15">15</span>
<span id="L16" rel="#L16">16</span>
<span id="L17" rel="#L17">17</span>
<span id="L18" rel="#L18">18</span>
<span id="L19" rel="#L19">19</span>
<span id="L20" rel="#L20">20</span>
<span id="L21" rel="#L21">21</span>
<span id="L22" rel="#L22">22</span>
<span id="L23" rel="#L23">23</span>
<span id="L24" rel="#L24">24</span>
<span id="L25" rel="#L25">25</span>
<span id="L26" rel="#L26">26</span>
<span id="L27" rel="#L27">27</span>
<span id="L28" rel="#L28">28</span>
<span id="L29" rel="#L29">29</span>
<span id="L30" rel="#L30">30</span>
<span id="L31" rel="#L31">31</span>
<span id="L32" rel="#L32">32</span>
<span id="L33" rel="#L33">33</span>
<span id="L34" rel="#L34">34</span>
<span id="L35" rel="#L35">35</span>
<span id="L36" rel="#L36">36</span>
<span id="L37" rel="#L37">37</span>
<span id="L38" rel="#L38">38</span>
<span id="L39" rel="#L39">39</span>
<span id="L40" rel="#L40">40</span>
<span id="L41" rel="#L41">41</span>
<span id="L42" rel="#L42">42</span>
<span id="L43" rel="#L43">43</span>
<span id="L44" rel="#L44">44</span>
<span id="L45" rel="#L45">45</span>
<span id="L46" rel="#L46">46</span>
<span id="L47" rel="#L47">47</span>
<span id="L48" rel="#L48">48</span>
<span id="L49" rel="#L49">49</span>
<span id="L50" rel="#L50">50</span>
<span id="L51" rel="#L51">51</span>
<span id="L52" rel="#L52">52</span>
<span id="L53" rel="#L53">53</span>
<span id="L54" rel="#L54">54</span>
<span id="L55" rel="#L55">55</span>
<span id="L56" rel="#L56">56</span>
<span id="L57" rel="#L57">57</span>
<span id="L58" rel="#L58">58</span>
<span id="L59" rel="#L59">59</span>
<span id="L60" rel="#L60">60</span>
<span id="L61" rel="#L61">61</span>
<span id="L62" rel="#L62">62</span>
<span id="L63" rel="#L63">63</span>
<span id="L64" rel="#L64">64</span>
<span id="L65" rel="#L65">65</span>
<span id="L66" rel="#L66">66</span>
<span id="L67" rel="#L67">67</span>
<span id="L68" rel="#L68">68</span>
<span id="L69" rel="#L69">69</span>
<span id="L70" rel="#L70">70</span>
<span id="L71" rel="#L71">71</span>
<span id="L72" rel="#L72">72</span>
<span id="L73" rel="#L73">73</span>
<span id="L74" rel="#L74">74</span>
<span id="L75" rel="#L75">75</span>
<span id="L76" rel="#L76">76</span>
<span id="L77" rel="#L77">77</span>
<span id="L78" rel="#L78">78</span>
<span id="L79" rel="#L79">79</span>
<span id="L80" rel="#L80">80</span>
<span id="L81" rel="#L81">81</span>
<span id="L82" rel="#L82">82</span>
<span id="L83" rel="#L83">83</span>
<span id="L84" rel="#L84">84</span>
<span id="L85" rel="#L85">85</span>
<span id="L86" rel="#L86">86</span>
<span id="L87" rel="#L87">87</span>
<span id="L88" rel="#L88">88</span>
<span id="L89" rel="#L89">89</span>
<span id="L90" rel="#L90">90</span>
<span id="L91" rel="#L91">91</span>
<span id="L92" rel="#L92">92</span>
<span id="L93" rel="#L93">93</span>
<span id="L94" rel="#L94">94</span>
<span id="L95" rel="#L95">95</span>
<span id="L96" rel="#L96">96</span>
<span id="L97" rel="#L97">97</span>
<span id="L98" rel="#L98">98</span>
<span id="L99" rel="#L99">99</span>
<span id="L100" rel="#L100">100</span>
<span id="L101" rel="#L101">101</span>
<span id="L102" rel="#L102">102</span>
<span id="L103" rel="#L103">103</span>
<span id="L104" rel="#L104">104</span>
<span id="L105" rel="#L105">105</span>
<span id="L106" rel="#L106">106</span>
<span id="L107" rel="#L107">107</span>
<span id="L108" rel="#L108">108</span>
<span id="L109" rel="#L109">109</span>
<span id="L110" rel="#L110">110</span>
<span id="L111" rel="#L111">111</span>
<span id="L112" rel="#L112">112</span>
<span id="L113" rel="#L113">113</span>
<span id="L114" rel="#L114">114</span>
<span id="L115" rel="#L115">115</span>
<span id="L116" rel="#L116">116</span>
<span id="L117" rel="#L117">117</span>
<span id="L118" rel="#L118">118</span>
<span id="L119" rel="#L119">119</span>
<span id="L120" rel="#L120">120</span>
<span id="L121" rel="#L121">121</span>
<span id="L122" rel="#L122">122</span>
<span id="L123" rel="#L123">123</span>
<span id="L124" rel="#L124">124</span>
<span id="L125" rel="#L125">125</span>
<span id="L126" rel="#L126">126</span>
<span id="L127" rel="#L127">127</span>
<span id="L128" rel="#L128">128</span>
<span id="L129" rel="#L129">129</span>
<span id="L130" rel="#L130">130</span>
<span id="L131" rel="#L131">131</span>
<span id="L132" rel="#L132">132</span>
<span id="L133" rel="#L133">133</span>
<span id="L134" rel="#L134">134</span>
<span id="L135" rel="#L135">135</span>
<span id="L136" rel="#L136">136</span>
<span id="L137" rel="#L137">137</span>
<span id="L138" rel="#L138">138</span>
<span id="L139" rel="#L139">139</span>
<span id="L140" rel="#L140">140</span>
<span id="L141" rel="#L141">141</span>
<span id="L142" rel="#L142">142</span>
<span id="L143" rel="#L143">143</span>
<span id="L144" rel="#L144">144</span>
<span id="L145" rel="#L145">145</span>
<span id="L146" rel="#L146">146</span>
<span id="L147" rel="#L147">147</span>
<span id="L148" rel="#L148">148</span>
<span id="L149" rel="#L149">149</span>
<span id="L150" rel="#L150">150</span>
<span id="L151" rel="#L151">151</span>
<span id="L152" rel="#L152">152</span>
<span id="L153" rel="#L153">153</span>
<span id="L154" rel="#L154">154</span>
<span id="L155" rel="#L155">155</span>
<span id="L156" rel="#L156">156</span>
<span id="L157" rel="#L157">157</span>
<span id="L158" rel="#L158">158</span>
<span id="L159" rel="#L159">159</span>
<span id="L160" rel="#L160">160</span>
<span id="L161" rel="#L161">161</span>
<span id="L162" rel="#L162">162</span>
<span id="L163" rel="#L163">163</span>
<span id="L164" rel="#L164">164</span>
<span id="L165" rel="#L165">165</span>
<span id="L166" rel="#L166">166</span>
<span id="L167" rel="#L167">167</span>
<span id="L168" rel="#L168">168</span>
<span id="L169" rel="#L169">169</span>
<span id="L170" rel="#L170">170</span>
<span id="L171" rel="#L171">171</span>
<span id="L172" rel="#L172">172</span>
<span id="L173" rel="#L173">173</span>
<span id="L174" rel="#L174">174</span>
<span id="L175" rel="#L175">175</span>
<span id="L176" rel="#L176">176</span>
<span id="L177" rel="#L177">177</span>
<span id="L178" rel="#L178">178</span>
<span id="L179" rel="#L179">179</span>
<span id="L180" rel="#L180">180</span>
<span id="L181" rel="#L181">181</span>
<span id="L182" rel="#L182">182</span>
<span id="L183" rel="#L183">183</span>
<span id="L184" rel="#L184">184</span>
<span id="L185" rel="#L185">185</span>
<span id="L186" rel="#L186">186</span>
<span id="L187" rel="#L187">187</span>
<span id="L188" rel="#L188">188</span>
<span id="L189" rel="#L189">189</span>
<span id="L190" rel="#L190">190</span>
<span id="L191" rel="#L191">191</span>
<span id="L192" rel="#L192">192</span>
<span id="L193" rel="#L193">193</span>
<span id="L194" rel="#L194">194</span>
<span id="L195" rel="#L195">195</span>
<span id="L196" rel="#L196">196</span>
<span id="L197" rel="#L197">197</span>
<span id="L198" rel="#L198">198</span>
<span id="L199" rel="#L199">199</span>
<span id="L200" rel="#L200">200</span>
<span id="L201" rel="#L201">201</span>
<span id="L202" rel="#L202">202</span>
<span id="L203" rel="#L203">203</span>
<span id="L204" rel="#L204">204</span>
<span id="L205" rel="#L205">205</span>
<span id="L206" rel="#L206">206</span>
<span id="L207" rel="#L207">207</span>
<span id="L208" rel="#L208">208</span>
<span id="L209" rel="#L209">209</span>
<span id="L210" rel="#L210">210</span>
<span id="L211" rel="#L211">211</span>
<span id="L212" rel="#L212">212</span>
<span id="L213" rel="#L213">213</span>
<span id="L214" rel="#L214">214</span>
<span id="L215" rel="#L215">215</span>
<span id="L216" rel="#L216">216</span>
<span id="L217" rel="#L217">217</span>
<span id="L218" rel="#L218">218</span>
<span id="L219" rel="#L219">219</span>
<span id="L220" rel="#L220">220</span>
<span id="L221" rel="#L221">221</span>
<span id="L222" rel="#L222">222</span>
<span id="L223" rel="#L223">223</span>
<span id="L224" rel="#L224">224</span>
<span id="L225" rel="#L225">225</span>
<span id="L226" rel="#L226">226</span>
<span id="L227" rel="#L227">227</span>
<span id="L228" rel="#L228">228</span>
<span id="L229" rel="#L229">229</span>
<span id="L230" rel="#L230">230</span>
<span id="L231" rel="#L231">231</span>
<span id="L232" rel="#L232">232</span>
<span id="L233" rel="#L233">233</span>
<span id="L234" rel="#L234">234</span>
<span id="L235" rel="#L235">235</span>
<span id="L236" rel="#L236">236</span>
<span id="L237" rel="#L237">237</span>
<span id="L238" rel="#L238">238</span>
<span id="L239" rel="#L239">239</span>
<span id="L240" rel="#L240">240</span>
<span id="L241" rel="#L241">241</span>
<span id="L242" rel="#L242">242</span>
<span id="L243" rel="#L243">243</span>
<span id="L244" rel="#L244">244</span>
<span id="L245" rel="#L245">245</span>
<span id="L246" rel="#L246">246</span>
<span id="L247" rel="#L247">247</span>
<span id="L248" rel="#L248">248</span>
<span id="L249" rel="#L249">249</span>
<span id="L250" rel="#L250">250</span>
<span id="L251" rel="#L251">251</span>
<span id="L252" rel="#L252">252</span>
<span id="L253" rel="#L253">253</span>
<span id="L254" rel="#L254">254</span>
<span id="L255" rel="#L255">255</span>
<span id="L256" rel="#L256">256</span>
<span id="L257" rel="#L257">257</span>
<span id="L258" rel="#L258">258</span>
<span id="L259" rel="#L259">259</span>
<span id="L260" rel="#L260">260</span>
<span id="L261" rel="#L261">261</span>
<span id="L262" rel="#L262">262</span>
<span id="L263" rel="#L263">263</span>
<span id="L264" rel="#L264">264</span>
<span id="L265" rel="#L265">265</span>
<span id="L266" rel="#L266">266</span>
<span id="L267" rel="#L267">267</span>
<span id="L268" rel="#L268">268</span>
<span id="L269" rel="#L269">269</span>
<span id="L270" rel="#L270">270</span>
<span id="L271" rel="#L271">271</span>
<span id="L272" rel="#L272">272</span>
<span id="L273" rel="#L273">273</span>
<span id="L274" rel="#L274">274</span>
<span id="L275" rel="#L275">275</span>
<span id="L276" rel="#L276">276</span>
<span id="L277" rel="#L277">277</span>
<span id="L278" rel="#L278">278</span>
<span id="L279" rel="#L279">279</span>
<span id="L280" rel="#L280">280</span>
<span id="L281" rel="#L281">281</span>
<span id="L282" rel="#L282">282</span>
<span id="L283" rel="#L283">283</span>
<span id="L284" rel="#L284">284</span>
<span id="L285" rel="#L285">285</span>
<span id="L286" rel="#L286">286</span>
<span id="L287" rel="#L287">287</span>
<span id="L288" rel="#L288">288</span>
<span id="L289" rel="#L289">289</span>
<span id="L290" rel="#L290">290</span>
<span id="L291" rel="#L291">291</span>
<span id="L292" rel="#L292">292</span>
<span id="L293" rel="#L293">293</span>
<span id="L294" rel="#L294">294</span>
<span id="L295" rel="#L295">295</span>
<span id="L296" rel="#L296">296</span>
<span id="L297" rel="#L297">297</span>
<span id="L298" rel="#L298">298</span>
<span id="L299" rel="#L299">299</span>
<span id="L300" rel="#L300">300</span>
<span id="L301" rel="#L301">301</span>
<span id="L302" rel="#L302">302</span>
<span id="L303" rel="#L303">303</span>
<span id="L304" rel="#L304">304</span>
<span id="L305" rel="#L305">305</span>
<span id="L306" rel="#L306">306</span>
<span id="L307" rel="#L307">307</span>
<span id="L308" rel="#L308">308</span>
<span id="L309" rel="#L309">309</span>
<span id="L310" rel="#L310">310</span>
<span id="L311" rel="#L311">311</span>
<span id="L312" rel="#L312">312</span>
<span id="L313" rel="#L313">313</span>
<span id="L314" rel="#L314">314</span>
<span id="L315" rel="#L315">315</span>
<span id="L316" rel="#L316">316</span>
<span id="L317" rel="#L317">317</span>
<span id="L318" rel="#L318">318</span>
<span id="L319" rel="#L319">319</span>
<span id="L320" rel="#L320">320</span>
<span id="L321" rel="#L321">321</span>
<span id="L322" rel="#L322">322</span>
<span id="L323" rel="#L323">323</span>
<span id="L324" rel="#L324">324</span>
<span id="L325" rel="#L325">325</span>
<span id="L326" rel="#L326">326</span>
<span id="L327" rel="#L327">327</span>
<span id="L328" rel="#L328">328</span>
<span id="L329" rel="#L329">329</span>
<span id="L330" rel="#L330">330</span>
<span id="L331" rel="#L331">331</span>
<span id="L332" rel="#L332">332</span>
<span id="L333" rel="#L333">333</span>
<span id="L334" rel="#L334">334</span>
<span id="L335" rel="#L335">335</span>
<span id="L336" rel="#L336">336</span>
<span id="L337" rel="#L337">337</span>
<span id="L338" rel="#L338">338</span>
<span id="L339" rel="#L339">339</span>
<span id="L340" rel="#L340">340</span>
<span id="L341" rel="#L341">341</span>
<span id="L342" rel="#L342">342</span>
<span id="L343" rel="#L343">343</span>
<span id="L344" rel="#L344">344</span>
<span id="L345" rel="#L345">345</span>
<span id="L346" rel="#L346">346</span>
<span id="L347" rel="#L347">347</span>
<span id="L348" rel="#L348">348</span>
<span id="L349" rel="#L349">349</span>
<span id="L350" rel="#L350">350</span>
<span id="L351" rel="#L351">351</span>
<span id="L352" rel="#L352">352</span>
<span id="L353" rel="#L353">353</span>
<span id="L354" rel="#L354">354</span>
<span id="L355" rel="#L355">355</span>
<span id="L356" rel="#L356">356</span>
<span id="L357" rel="#L357">357</span>
<span id="L358" rel="#L358">358</span>
<span id="L359" rel="#L359">359</span>
<span id="L360" rel="#L360">360</span>
<span id="L361" rel="#L361">361</span>
<span id="L362" rel="#L362">362</span>
<span id="L363" rel="#L363">363</span>
<span id="L364" rel="#L364">364</span>
<span id="L365" rel="#L365">365</span>
<span id="L366" rel="#L366">366</span>
<span id="L367" rel="#L367">367</span>
<span id="L368" rel="#L368">368</span>
<span id="L369" rel="#L369">369</span>
<span id="L370" rel="#L370">370</span>
<span id="L371" rel="#L371">371</span>
<span id="L372" rel="#L372">372</span>
<span id="L373" rel="#L373">373</span>
<span id="L374" rel="#L374">374</span>
<span id="L375" rel="#L375">375</span>
<span id="L376" rel="#L376">376</span>
<span id="L377" rel="#L377">377</span>
<span id="L378" rel="#L378">378</span>
<span id="L379" rel="#L379">379</span>
<span id="L380" rel="#L380">380</span>
<span id="L381" rel="#L381">381</span>
<span id="L382" rel="#L382">382</span>
<span id="L383" rel="#L383">383</span>
<span id="L384" rel="#L384">384</span>
<span id="L385" rel="#L385">385</span>
<span id="L386" rel="#L386">386</span>
<span id="L387" rel="#L387">387</span>
<span id="L388" rel="#L388">388</span>
<span id="L389" rel="#L389">389</span>
<span id="L390" rel="#L390">390</span>
<span id="L391" rel="#L391">391</span>
<span id="L392" rel="#L392">392</span>
<span id="L393" rel="#L393">393</span>
<span id="L394" rel="#L394">394</span>
<span id="L395" rel="#L395">395</span>
<span id="L396" rel="#L396">396</span>
<span id="L397" rel="#L397">397</span>
<span id="L398" rel="#L398">398</span>
<span id="L399" rel="#L399">399</span>
<span id="L400" rel="#L400">400</span>
<span id="L401" rel="#L401">401</span>
<span id="L402" rel="#L402">402</span>
<span id="L403" rel="#L403">403</span>
<span id="L404" rel="#L404">404</span>
<span id="L405" rel="#L405">405</span>
<span id="L406" rel="#L406">406</span>
<span id="L407" rel="#L407">407</span>
<span id="L408" rel="#L408">408</span>
<span id="L409" rel="#L409">409</span>
<span id="L410" rel="#L410">410</span>
<span id="L411" rel="#L411">411</span>
<span id="L412" rel="#L412">412</span>
<span id="L413" rel="#L413">413</span>
<span id="L414" rel="#L414">414</span>
<span id="L415" rel="#L415">415</span>
<span id="L416" rel="#L416">416</span>
<span id="L417" rel="#L417">417</span>
<span id="L418" rel="#L418">418</span>
<span id="L419" rel="#L419">419</span>
<span id="L420" rel="#L420">420</span>
<span id="L421" rel="#L421">421</span>
<span id="L422" rel="#L422">422</span>
<span id="L423" rel="#L423">423</span>
<span id="L424" rel="#L424">424</span>
<span id="L425" rel="#L425">425</span>
<span id="L426" rel="#L426">426</span>
<span id="L427" rel="#L427">427</span>
<span id="L428" rel="#L428">428</span>
<span id="L429" rel="#L429">429</span>
<span id="L430" rel="#L430">430</span>
<span id="L431" rel="#L431">431</span>
<span id="L432" rel="#L432">432</span>
<span id="L433" rel="#L433">433</span>

           </td>
           <td class="blob-line-code"><div class="code-body highlight"><pre><div class='line' id='LC1'><span class="c1">// Special functions -*- C++ -*-</span></div><div class='line' id='LC2'><br></div><div class='line' id='LC3'><span class="c1">// Copyright (C) 2006-2014 Free Software Foundation, Inc.</span></div><div class='line' id='LC4'><span class="c1">//</span></div><div class='line' id='LC5'><span class="c1">// This file is part of the GNU ISO C++ Library.  This library is free</span></div><div class='line' id='LC6'><span class="c1">// software; you can redistribute it and/or modify it under the</span></div><div class='line' id='LC7'><span class="c1">// terms of the GNU General Public License as published by the</span></div><div class='line' id='LC8'><span class="c1">// Free Software Foundation; either version 3, or (at your option)</span></div><div class='line' id='LC9'><span class="c1">// any later version.</span></div><div class='line' id='LC10'><span class="c1">//</span></div><div class='line' id='LC11'><span class="c1">// This library is distributed in the hope that it will be useful,</span></div><div class='line' id='LC12'><span class="c1">// but WITHOUT ANY WARRANTY; without even the implied warranty of</span></div><div class='line' id='LC13'><span class="c1">// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the</span></div><div class='line' id='LC14'><span class="c1">// GNU General Public License for more details.</span></div><div class='line' id='LC15'><span class="c1">//</span></div><div class='line' id='LC16'><span class="c1">// Under Section 7 of GPL version 3, you are granted additional</span></div><div class='line' id='LC17'><span class="c1">// permissions described in the GCC Runtime Library Exception, version</span></div><div class='line' id='LC18'><span class="c1">// 3.1, as published by the Free Software Foundation.</span></div><div class='line' id='LC19'><br></div><div class='line' id='LC20'><span class="c1">// You should have received a copy of the GNU General Public License and</span></div><div class='line' id='LC21'><span class="c1">// a copy of the GCC Runtime Library Exception along with this program;</span></div><div class='line' id='LC22'><span class="c1">// see the files COPYING3 and COPYING.RUNTIME respectively.  If not, see</span></div><div class='line' id='LC23'><span class="c1">// &lt;http://www.gnu.org/licenses/&gt;.</span></div><div class='line' id='LC24'><br></div><div class='line' id='LC25'><span class="cm">/** @file tr1/riemann_zeta.tcc</span></div><div class='line' id='LC26'><span class="cm"> *  This is an internal header file, included by other library headers.</span></div><div class='line' id='LC27'><span class="cm"> *  Do not attempt to use it directly. @headername{tr1/cmath}</span></div><div class='line' id='LC28'><span class="cm"> */</span></div><div class='line' id='LC29'><br></div><div class='line' id='LC30'><span class="c1">//</span></div><div class='line' id='LC31'><span class="c1">// ISO C++ 14882 TR1: 5.2  Special functions</span></div><div class='line' id='LC32'><span class="c1">//</span></div><div class='line' id='LC33'><br></div><div class='line' id='LC34'><span class="c1">// Written by Edward Smith-Rowland based on:</span></div><div class='line' id='LC35'><span class="c1">//   (1) Handbook of Mathematical Functions,</span></div><div class='line' id='LC36'><span class="c1">//       Ed. by Milton Abramowitz and Irene A. Stegun,</span></div><div class='line' id='LC37'><span class="c1">//       Dover Publications, New-York, Section 5, pp. 807-808.</span></div><div class='line' id='LC38'><span class="c1">//   (2) The Gnu Scientific Library, http://www.gnu.org/software/gsl</span></div><div class='line' id='LC39'><span class="c1">//   (3) Gamma, Exploring Euler&#39;s Constant, Julian Havil,</span></div><div class='line' id='LC40'><span class="c1">//       Princeton, 2003.</span></div><div class='line' id='LC41'><br></div><div class='line' id='LC42'><span class="cp">#ifndef _GLIBCXX_TR1_RIEMANN_ZETA_TCC</span></div><div class='line' id='LC43'><span class="cp">#define _GLIBCXX_TR1_RIEMANN_ZETA_TCC 1</span></div><div class='line' id='LC44'><br></div><div class='line' id='LC45'><span class="cp">#include &quot;special_function_util.h&quot;</span></div><div class='line' id='LC46'><br></div><div class='line' id='LC47'><span class="k">namespace</span> <span class="n">std</span> <span class="nf">_GLIBCXX_VISIBILITY</span><span class="p">(</span><span class="k">default</span><span class="p">)</span></div><div class='line' id='LC48'><span class="p">{</span></div><div class='line' id='LC49'><span class="k">namespace</span> <span class="n">tr1</span></div><div class='line' id='LC50'><span class="p">{</span></div><div class='line' id='LC51'>&nbsp;&nbsp;<span class="c1">// [5.2] Special functions</span></div><div class='line' id='LC52'><br></div><div class='line' id='LC53'>&nbsp;&nbsp;<span class="c1">// Implementation-space details.</span></div><div class='line' id='LC54'>&nbsp;&nbsp;<span class="k">namespace</span> <span class="n">__detail</span></div><div class='line' id='LC55'>&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC56'>&nbsp;&nbsp;<span class="n">_GLIBCXX_BEGIN_NAMESPACE_VERSION</span></div><div class='line' id='LC57'><br></div><div class='line' id='LC58'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC59'><span class="cm">     *   @brief  Compute the Riemann zeta function @f$ \zeta(s) @f$</span></div><div class='line' id='LC60'><span class="cm">     *           by summation for s &gt; 1.</span></div><div class='line' id='LC61'><span class="cm">     * </span></div><div class='line' id='LC62'><span class="cm">     *   The Riemann zeta function is defined by:</span></div><div class='line' id='LC63'><span class="cm">     *    \f[</span></div><div class='line' id='LC64'><span class="cm">     *      \zeta(s) = \sum_{k=1}^{\infty} \frac{1}{k^{s}} for s &gt; 1</span></div><div class='line' id='LC65'><span class="cm">     *    \f]</span></div><div class='line' id='LC66'><span class="cm">     *   For s &lt; 1 use the reflection formula:</span></div><div class='line' id='LC67'><span class="cm">     *    \f[</span></div><div class='line' id='LC68'><span class="cm">     *      \zeta(s) = 2^s \pi^{s-1} \Gamma(1-s) \zeta(1-s)</span></div><div class='line' id='LC69'><span class="cm">     *    \f]</span></div><div class='line' id='LC70'><span class="cm">     */</span></div><div class='line' id='LC71'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC72'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC73'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__riemann_zeta_sum</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC74'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC75'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  A user shouldn&#39;t get to this.</span></div><div class='line' id='LC76'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">&lt;</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">))</span></div><div class='line' id='LC77'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">std</span><span class="o">::</span><span class="n">__throw_domain_error</span><span class="p">(</span><span class="n">__N</span><span class="p">(</span><span class="s">&quot;Bad argument in zeta sum.&quot;</span><span class="p">));</span></div><div class='line' id='LC78'><br></div><div class='line' id='LC79'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">max_iter</span> <span class="o">=</span> <span class="mi">10000</span><span class="p">;</span></div><div class='line' id='LC80'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC81'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__k</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">__k</span> <span class="o">&lt;</span> <span class="n">max_iter</span><span class="p">;</span> <span class="o">++</span><span class="n">__k</span><span class="p">)</span></div><div class='line' id='LC82'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC83'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__term</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="k">static_cast</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;</span><span class="p">(</span><span class="n">__k</span><span class="p">),</span> <span class="o">-</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC84'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__term</span> <span class="o">&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">epsilon</span><span class="p">())</span></div><div class='line' id='LC85'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC86'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC87'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC88'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">+=</span> <span class="n">__term</span><span class="p">;</span></div><div class='line' id='LC89'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC90'><br></div><div class='line' id='LC91'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC92'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC93'><br></div><div class='line' id='LC94'><br></div><div class='line' id='LC95'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC96'><span class="cm">     *   @brief  Evaluate the Riemann zeta function @f$ \zeta(s) @f$</span></div><div class='line' id='LC97'><span class="cm">     *           by an alternate series for s &gt; 0.</span></div><div class='line' id='LC98'><span class="cm">     * </span></div><div class='line' id='LC99'><span class="cm">     *   The Riemann zeta function is defined by:</span></div><div class='line' id='LC100'><span class="cm">     *    \f[</span></div><div class='line' id='LC101'><span class="cm">     *      \zeta(s) = \sum_{k=1}^{\infty} \frac{1}{k^{s}} for s &gt; 1</span></div><div class='line' id='LC102'><span class="cm">     *    \f]</span></div><div class='line' id='LC103'><span class="cm">     *   For s &lt; 1 use the reflection formula:</span></div><div class='line' id='LC104'><span class="cm">     *    \f[</span></div><div class='line' id='LC105'><span class="cm">     *      \zeta(s) = 2^s \pi^{s-1} \Gamma(1-s) \zeta(1-s)</span></div><div class='line' id='LC106'><span class="cm">     *    \f]</span></div><div class='line' id='LC107'><span class="cm">     */</span></div><div class='line' id='LC108'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC109'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC110'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__riemann_zeta_alt</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC111'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC112'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__sgn</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC113'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC114'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__i</span> <span class="o">=</span> <span class="mi">1</span><span class="p">;</span> <span class="n">__i</span> <span class="o">&lt;</span> <span class="mi">10000000</span><span class="p">;</span> <span class="o">++</span><span class="n">__i</span><span class="p">)</span></div><div class='line' id='LC115'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC116'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__term</span> <span class="o">=</span> <span class="n">__sgn</span> <span class="o">/</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">__i</span><span class="p">,</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC117'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">abs</span><span class="p">(</span><span class="n">__term</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">epsilon</span><span class="p">())</span></div><div class='line' id='LC118'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC119'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">+=</span> <span class="n">__term</span><span class="p">;</span></div><div class='line' id='LC120'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__sgn</span> <span class="o">*=</span> <span class="n">_Tp</span><span class="p">(</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC121'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC122'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">/=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC123'><br></div><div class='line' id='LC124'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC125'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC126'><br></div><div class='line' id='LC127'><br></div><div class='line' id='LC128'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC129'><span class="cm">     *   @brief  Evaluate the Riemann zeta function by series for all s != 1.</span></div><div class='line' id='LC130'><span class="cm">     *           Convergence is great until largish negative numbers.</span></div><div class='line' id='LC131'><span class="cm">     *           Then the convergence of the &gt; 0 sum gets better.</span></div><div class='line' id='LC132'><span class="cm">     *</span></div><div class='line' id='LC133'><span class="cm">     *   The series is:</span></div><div class='line' id='LC134'><span class="cm">     *    \f[</span></div><div class='line' id='LC135'><span class="cm">     *      \zeta(s) = \frac{1}{1-2^{1-s}}</span></div><div class='line' id='LC136'><span class="cm">     *                 \sum_{n=0}^{\infty} \frac{1}{2^{n+1}}</span></div><div class='line' id='LC137'><span class="cm">     *                 \sum_{k=0}^{n} (-1)^k \frac{n!}{(n-k)!k!} (k+1)^{-s}</span></div><div class='line' id='LC138'><span class="cm">     *    \f]</span></div><div class='line' id='LC139'><span class="cm">     *   Havil 2003, p. 206.</span></div><div class='line' id='LC140'><span class="cm">     *</span></div><div class='line' id='LC141'><span class="cm">     *   The Riemann zeta function is defined by:</span></div><div class='line' id='LC142'><span class="cm">     *    \f[</span></div><div class='line' id='LC143'><span class="cm">     *      \zeta(s) = \sum_{k=1}^{\infty} \frac{1}{k^{s}} for s &gt; 1</span></div><div class='line' id='LC144'><span class="cm">     *    \f]</span></div><div class='line' id='LC145'><span class="cm">     *   For s &lt; 1 use the reflection formula:</span></div><div class='line' id='LC146'><span class="cm">     *    \f[</span></div><div class='line' id='LC147'><span class="cm">     *      \zeta(s) = 2^s \pi^{s-1} \Gamma(1-s) \zeta(1-s)</span></div><div class='line' id='LC148'><span class="cm">     *    \f]</span></div><div class='line' id='LC149'><span class="cm">     */</span></div><div class='line' id='LC150'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC151'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC152'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__riemann_zeta_glob</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC153'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC154'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC155'><br></div><div class='line' id='LC156'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">_Tp</span> <span class="n">__eps</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">epsilon</span><span class="p">();</span></div><div class='line' id='LC157'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Max e exponent before overflow.</span></div><div class='line' id='LC158'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">_Tp</span> <span class="n">__max_bincoeff</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">max_exponent10</span></div><div class='line' id='LC159'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">log</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">10</span><span class="p">))</span> <span class="o">-</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC160'><br></div><div class='line' id='LC161'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  This series works until the binomial coefficient blows up</span></div><div class='line' id='LC162'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  so use reflection.</span></div><div class='line' id='LC163'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">&lt;</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">))</span></div><div class='line' id='LC164'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC165'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC166'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">fmod</span><span class="p">(</span><span class="n">__s</span><span class="p">,</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">))</span> <span class="o">==</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">))</span></div><div class='line' id='LC167'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC168'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC169'><span class="cp">#endif</span></div><div class='line' id='LC170'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC171'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">__riemann_zeta_glob</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC172'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">*=</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">)</span></div><div class='line' id='LC173'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi</span><span class="p">(),</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC174'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">sin</span><span class="p">(</span><span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi_2</span><span class="p">()</span> <span class="o">*</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC175'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC176'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC177'><span class="cp">#else</span></div><div class='line' id='LC178'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC179'><span class="cp">#endif</span></div><div class='line' id='LC180'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">/</span> <span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi</span><span class="p">();</span></div><div class='line' id='LC181'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC182'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC183'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC184'><br></div><div class='line' id='LC185'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__num</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mf">0.5</span><span class="n">L</span><span class="p">);</span></div><div class='line' id='LC186'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__maxit</span> <span class="o">=</span> <span class="mi">10000</span><span class="p">;</span></div><div class='line' id='LC187'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">__i</span> <span class="o">&lt;</span> <span class="n">__maxit</span><span class="p">;</span> <span class="o">++</span><span class="n">__i</span><span class="p">)</span></div><div class='line' id='LC188'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC189'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">__punt</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC190'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__sgn</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC191'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__term</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC192'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">__j</span> <span class="o">&lt;=</span> <span class="n">__i</span><span class="p">;</span> <span class="o">++</span><span class="n">__j</span><span class="p">)</span></div><div class='line' id='LC193'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC194'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC195'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__bincoeff</span> <span class="o">=</span>  <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span><span class="p">))</span></div><div class='line' id='LC196'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__j</span><span class="p">))</span></div><div class='line' id='LC197'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span> <span class="o">-</span> <span class="n">__j</span><span class="p">));</span></div><div class='line' id='LC198'><span class="cp">#else</span></div><div class='line' id='LC199'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__bincoeff</span> <span class="o">=</span>  <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span><span class="p">))</span></div><div class='line' id='LC200'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__j</span><span class="p">))</span></div><div class='line' id='LC201'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span> <span class="o">-</span> <span class="n">__j</span><span class="p">));</span></div><div class='line' id='LC202'><span class="cp">#endif</span></div><div class='line' id='LC203'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__bincoeff</span> <span class="o">&gt;</span> <span class="n">__max_bincoeff</span><span class="p">)</span></div><div class='line' id='LC204'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC205'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  This only gets hit for x &lt;&lt; 0.</span></div><div class='line' id='LC206'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__punt</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC207'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC208'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC209'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__bincoeff</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">__bincoeff</span><span class="p">);</span></div><div class='line' id='LC210'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__term</span> <span class="o">+=</span> <span class="n">__sgn</span> <span class="o">*</span> <span class="n">__bincoeff</span> <span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__j</span><span class="p">),</span> <span class="o">-</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC211'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__sgn</span> <span class="o">*=</span> <span class="n">_Tp</span><span class="p">(</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC212'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC213'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__punt</span><span class="p">)</span></div><div class='line' id='LC214'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC215'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__term</span> <span class="o">*=</span> <span class="n">__num</span><span class="p">;</span></div><div class='line' id='LC216'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">+=</span> <span class="n">__term</span><span class="p">;</span></div><div class='line' id='LC217'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">abs</span><span class="p">(</span><span class="n">__term</span><span class="o">/</span><span class="n">__zeta</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">__eps</span><span class="p">)</span></div><div class='line' id='LC218'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC219'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__num</span> <span class="o">*=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mf">0.5</span><span class="n">L</span><span class="p">);</span></div><div class='line' id='LC220'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC221'><br></div><div class='line' id='LC222'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">/=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC223'><br></div><div class='line' id='LC224'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC225'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC226'><br></div><div class='line' id='LC227'><br></div><div class='line' id='LC228'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC229'><span class="cm">     *   @brief  Compute the Riemann zeta function @f$ \zeta(s) @f$</span></div><div class='line' id='LC230'><span class="cm">     *           using the product over prime factors.</span></div><div class='line' id='LC231'><span class="cm">     *    \f[</span></div><div class='line' id='LC232'><span class="cm">     *      \zeta(s) = \Pi_{i=1}^\infty \frac{1}{1 - p_i^{-s}}</span></div><div class='line' id='LC233'><span class="cm">     *    \f]</span></div><div class='line' id='LC234'><span class="cm">     *    where @f$ {p_i} @f$ are the prime numbers.</span></div><div class='line' id='LC235'><span class="cm">     * </span></div><div class='line' id='LC236'><span class="cm">     *   The Riemann zeta function is defined by:</span></div><div class='line' id='LC237'><span class="cm">     *    \f[</span></div><div class='line' id='LC238'><span class="cm">     *      \zeta(s) = \sum_{k=1}^{\infty} \frac{1}{k^{s}} for s &gt; 1</span></div><div class='line' id='LC239'><span class="cm">     *    \f]</span></div><div class='line' id='LC240'><span class="cm">     *   For s &lt; 1 use the reflection formula:</span></div><div class='line' id='LC241'><span class="cm">     *    \f[</span></div><div class='line' id='LC242'><span class="cm">     *      \zeta(s) = 2^s \pi^{s-1} \Gamma(1-s) \zeta(1-s)</span></div><div class='line' id='LC243'><span class="cm">     *    \f]</span></div><div class='line' id='LC244'><span class="cm">     */</span></div><div class='line' id='LC245'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC246'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC247'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__riemann_zeta_product</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC248'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC249'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="k">const</span> <span class="n">_Tp</span> <span class="n">__prime</span><span class="p">[]</span> <span class="o">=</span> <span class="p">{</span></div><div class='line' id='LC250'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">3</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">5</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">7</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">11</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">13</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">17</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">19</span><span class="p">),</span></div><div class='line' id='LC251'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span><span class="p">(</span><span class="mi">23</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">29</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">31</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">37</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">41</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">43</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">47</span><span class="p">),</span></div><div class='line' id='LC252'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span><span class="p">(</span><span class="mi">53</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">59</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">61</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">67</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">71</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">73</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">79</span><span class="p">),</span></div><div class='line' id='LC253'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span><span class="p">(</span><span class="mi">83</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">89</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">97</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">101</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">103</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">107</span><span class="p">),</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">109</span><span class="p">)</span></div><div class='line' id='LC254'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">};</span></div><div class='line' id='LC255'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">static</span> <span class="k">const</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__num_primes</span> <span class="o">=</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">__prime</span><span class="p">)</span> <span class="o">/</span> <span class="k">sizeof</span><span class="p">(</span><span class="n">_Tp</span><span class="p">);</span></div><div class='line' id='LC256'><br></div><div class='line' id='LC257'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC258'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">__i</span> <span class="o">&lt;</span> <span class="n">__num_primes</span><span class="p">;</span> <span class="o">++</span><span class="n">__i</span><span class="p">)</span></div><div class='line' id='LC259'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC260'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">_Tp</span> <span class="n">__fact</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">__prime</span><span class="p">[</span><span class="n">__i</span><span class="p">],</span> <span class="o">-</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC261'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">*=</span> <span class="n">__fact</span><span class="p">;</span></div><div class='line' id='LC262'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__fact</span> <span class="o">&lt;</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">epsilon</span><span class="p">())</span></div><div class='line' id='LC263'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC264'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC265'><br></div><div class='line' id='LC266'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">/</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC267'><br></div><div class='line' id='LC268'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC269'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC270'><br></div><div class='line' id='LC271'><br></div><div class='line' id='LC272'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC273'><span class="cm">     *   @brief  Return the Riemann zeta function @f$ \zeta(s) @f$.</span></div><div class='line' id='LC274'><span class="cm">     * </span></div><div class='line' id='LC275'><span class="cm">     *   The Riemann zeta function is defined by:</span></div><div class='line' id='LC276'><span class="cm">     *    \f[</span></div><div class='line' id='LC277'><span class="cm">     *      \zeta(s) = \sum_{k=1}^{\infty} k^{-s} for s &gt; 1</span></div><div class='line' id='LC278'><span class="cm">     *                 \frac{(2\pi)^s}{pi} sin(\frac{\pi s}{2})</span></div><div class='line' id='LC279'><span class="cm">     *                 \Gamma (1 - s) \zeta (1 - s) for s &lt; 1</span></div><div class='line' id='LC280'><span class="cm">     *    \f]</span></div><div class='line' id='LC281'><span class="cm">     *   For s &lt; 1 use the reflection formula:</span></div><div class='line' id='LC282'><span class="cm">     *    \f[</span></div><div class='line' id='LC283'><span class="cm">     *      \zeta(s) = 2^s \pi^{s-1} \Gamma(1-s) \zeta(1-s)</span></div><div class='line' id='LC284'><span class="cm">     *    \f]</span></div><div class='line' id='LC285'><span class="cm">     */</span></div><div class='line' id='LC286'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC287'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC288'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__riemann_zeta</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC289'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC290'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__isnan</span><span class="p">(</span><span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC291'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">quiet_NaN</span><span class="p">();</span></div><div class='line' id='LC292'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">==</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">))</span></div><div class='line' id='LC293'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">infinity</span><span class="p">();</span></div><div class='line' id='LC294'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">&lt;</span> <span class="o">-</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">19</span><span class="p">))</span></div><div class='line' id='LC295'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC296'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">__riemann_zeta_product</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC297'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">*=</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">)</span> <span class="o">*</span> <span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi</span><span class="p">(),</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC298'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">sin</span><span class="p">(</span><span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi_2</span><span class="p">()</span> <span class="o">*</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC299'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC300'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC301'><span class="cp">#else</span></div><div class='line' id='LC302'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC303'><span class="cp">#endif</span></div><div class='line' id='LC304'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">/</span> <span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi</span><span class="p">();</span></div><div class='line' id='LC305'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC306'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC307'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span> <span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">&lt;</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">20</span><span class="p">))</span></div><div class='line' id='LC308'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC309'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Global double sum or McLaurin?</span></div><div class='line' id='LC310'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">__glob</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC311'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__glob</span><span class="p">)</span></div><div class='line' id='LC312'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__riemann_zeta_glob</span><span class="p">(</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC313'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC314'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC315'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__s</span> <span class="o">&gt;</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">))</span></div><div class='line' id='LC316'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__riemann_zeta_sum</span><span class="p">(</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC317'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC318'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC319'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">2</span><span class="p">)</span></div><div class='line' id='LC320'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi</span><span class="p">(),</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC321'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">sin</span><span class="p">(</span><span class="n">__numeric_constants</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">__pi_2</span><span class="p">()</span> <span class="o">*</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC322'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC323'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">tgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC324'><span class="cp">#else</span></div><div class='line' id='LC325'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">))</span></div><div class='line' id='LC326'><span class="cp">#endif</span></div><div class='line' id='LC327'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">__riemann_zeta_sum</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">)</span> <span class="o">-</span> <span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC328'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC329'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC330'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC331'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC332'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">else</span></div><div class='line' id='LC333'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__riemann_zeta_product</span><span class="p">(</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC334'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC335'><br></div><div class='line' id='LC336'><br></div><div class='line' id='LC337'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC338'><span class="cm">     *   @brief  Return the Hurwitz zeta function @f$ \zeta(x,s) @f$</span></div><div class='line' id='LC339'><span class="cm">     *           for all s != 1 and x &gt; -1.</span></div><div class='line' id='LC340'><span class="cm">     * </span></div><div class='line' id='LC341'><span class="cm">     *   The Hurwitz zeta function is defined by:</span></div><div class='line' id='LC342'><span class="cm">     *   @f[</span></div><div class='line' id='LC343'><span class="cm">     *     \zeta(x,s) = \sum_{n=0}^{\infty} \frac{1}{(n + x)^s}</span></div><div class='line' id='LC344'><span class="cm">     *   @f]</span></div><div class='line' id='LC345'><span class="cm">     *   The Riemann zeta function is a special case:</span></div><div class='line' id='LC346'><span class="cm">     *   @f[</span></div><div class='line' id='LC347'><span class="cm">     *     \zeta(s) = \zeta(1,s)</span></div><div class='line' id='LC348'><span class="cm">     *   @f]</span></div><div class='line' id='LC349'><span class="cm">     * </span></div><div class='line' id='LC350'><span class="cm">     *   This functions uses the double sum that converges for s != 1</span></div><div class='line' id='LC351'><span class="cm">     *   and x &gt; -1:</span></div><div class='line' id='LC352'><span class="cm">     *   @f[</span></div><div class='line' id='LC353'><span class="cm">     *     \zeta(x,s) = \frac{1}{s-1}</span></div><div class='line' id='LC354'><span class="cm">     *                \sum_{n=0}^{\infty} \frac{1}{n + 1}</span></div><div class='line' id='LC355'><span class="cm">     *                \sum_{k=0}^{n} (-1)^k \frac{n!}{(n-k)!k!} (x+k)^{-s}</span></div><div class='line' id='LC356'><span class="cm">     *   @f]</span></div><div class='line' id='LC357'><span class="cm">     */</span></div><div class='line' id='LC358'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC359'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span></div><div class='line' id='LC360'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__hurwitz_zeta_glob</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__a</span><span class="p">,</span> <span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC361'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC362'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__zeta</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC363'><br></div><div class='line' id='LC364'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">_Tp</span> <span class="n">__eps</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">epsilon</span><span class="p">();</span></div><div class='line' id='LC365'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  Max e exponent before overflow.</span></div><div class='line' id='LC366'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="n">_Tp</span> <span class="n">__max_bincoeff</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">numeric_limits</span><span class="o">&lt;</span><span class="n">_Tp</span><span class="o">&gt;::</span><span class="n">max_exponent10</span></div><div class='line' id='LC367'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">log</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">10</span><span class="p">))</span> <span class="o">-</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC368'><br></div><div class='line' id='LC369'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">const</span> <span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__maxit</span> <span class="o">=</span> <span class="mi">10000</span><span class="p">;</span></div><div class='line' id='LC370'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__i</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">__i</span> <span class="o">&lt;</span> <span class="n">__maxit</span><span class="p">;</span> <span class="o">++</span><span class="n">__i</span><span class="p">)</span></div><div class='line' id='LC371'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC372'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="kt">bool</span> <span class="n">__punt</span> <span class="o">=</span> <span class="nb">false</span><span class="p">;</span></div><div class='line' id='LC373'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__sgn</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC374'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__term</span> <span class="o">=</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">0</span><span class="p">);</span></div><div class='line' id='LC375'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">for</span> <span class="p">(</span><span class="kt">unsigned</span> <span class="kt">int</span> <span class="n">__j</span> <span class="o">=</span> <span class="mi">0</span><span class="p">;</span> <span class="n">__j</span> <span class="o">&lt;=</span> <span class="n">__i</span><span class="p">;</span> <span class="o">++</span><span class="n">__j</span><span class="p">)</span></div><div class='line' id='LC376'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC377'><span class="cp">#if _GLIBCXX_USE_C99_MATH_TR1</span></div><div class='line' id='LC378'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__bincoeff</span> <span class="o">=</span>  <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span><span class="p">))</span></div><div class='line' id='LC379'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__j</span><span class="p">))</span></div><div class='line' id='LC380'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">std</span><span class="o">::</span><span class="n">tr1</span><span class="o">::</span><span class="n">lgamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span> <span class="o">-</span> <span class="n">__j</span><span class="p">));</span></div><div class='line' id='LC381'><span class="cp">#else</span></div><div class='line' id='LC382'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">_Tp</span> <span class="n">__bincoeff</span> <span class="o">=</span>  <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span><span class="p">))</span></div><div class='line' id='LC383'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__j</span><span class="p">))</span></div><div class='line' id='LC384'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="o">-</span> <span class="n">__log_gamma</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span> <span class="o">+</span> <span class="n">__i</span> <span class="o">-</span> <span class="n">__j</span><span class="p">));</span></div><div class='line' id='LC385'><span class="cp">#endif</span></div><div class='line' id='LC386'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__bincoeff</span> <span class="o">&gt;</span> <span class="n">__max_bincoeff</span><span class="p">)</span></div><div class='line' id='LC387'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span></div><div class='line' id='LC388'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="c1">//  This only gets hit for x &lt;&lt; 0.</span></div><div class='line' id='LC389'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__punt</span> <span class="o">=</span> <span class="nb">true</span><span class="p">;</span></div><div class='line' id='LC390'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC391'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC392'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__bincoeff</span> <span class="o">=</span> <span class="n">std</span><span class="o">::</span><span class="n">exp</span><span class="p">(</span><span class="n">__bincoeff</span><span class="p">);</span></div><div class='line' id='LC393'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__term</span> <span class="o">+=</span> <span class="n">__sgn</span> <span class="o">*</span> <span class="n">__bincoeff</span> <span class="o">*</span> <span class="n">std</span><span class="o">::</span><span class="n">pow</span><span class="p">(</span><span class="n">_Tp</span><span class="p">(</span><span class="n">__a</span> <span class="o">+</span> <span class="n">__j</span><span class="p">),</span> <span class="o">-</span><span class="n">__s</span><span class="p">);</span></div><div class='line' id='LC394'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__sgn</span> <span class="o">*=</span> <span class="n">_Tp</span><span class="p">(</span><span class="o">-</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC395'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC396'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">__punt</span><span class="p">)</span></div><div class='line' id='LC397'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC398'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__term</span> <span class="o">/=</span> <span class="n">_Tp</span><span class="p">(</span><span class="n">__i</span> <span class="o">+</span> <span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC399'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">if</span> <span class="p">(</span><span class="n">std</span><span class="o">::</span><span class="n">abs</span><span class="p">(</span><span class="n">__term</span> <span class="o">/</span> <span class="n">__zeta</span><span class="p">)</span> <span class="o">&lt;</span> <span class="n">__eps</span><span class="p">)</span></div><div class='line' id='LC400'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">break</span><span class="p">;</span></div><div class='line' id='LC401'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">+=</span> <span class="n">__term</span><span class="p">;</span></div><div class='line' id='LC402'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC403'><br></div><div class='line' id='LC404'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__zeta</span> <span class="o">/=</span> <span class="n">__s</span> <span class="o">-</span> <span class="n">_Tp</span><span class="p">(</span><span class="mi">1</span><span class="p">);</span></div><div class='line' id='LC405'><br></div><div class='line' id='LC406'>&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">return</span> <span class="n">__zeta</span><span class="p">;</span></div><div class='line' id='LC407'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">}</span></div><div class='line' id='LC408'><br></div><div class='line' id='LC409'><br></div><div class='line' id='LC410'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="cm">/**</span></div><div class='line' id='LC411'><span class="cm">     *   @brief  Return the Hurwitz zeta function @f$ \zeta(x,s) @f$</span></div><div class='line' id='LC412'><span class="cm">     *           for all s != 1 and x &gt; -1.</span></div><div class='line' id='LC413'><span class="cm">     * </span></div><div class='line' id='LC414'><span class="cm">     *   The Hurwitz zeta function is defined by:</span></div><div class='line' id='LC415'><span class="cm">     *   @f[</span></div><div class='line' id='LC416'><span class="cm">     *     \zeta(x,s) = \sum_{n=0}^{\infty} \frac{1}{(n + x)^s}</span></div><div class='line' id='LC417'><span class="cm">     *   @f]</span></div><div class='line' id='LC418'><span class="cm">     *   The Riemann zeta function is a special case:</span></div><div class='line' id='LC419'><span class="cm">     *   @f[</span></div><div class='line' id='LC420'><span class="cm">     *     \zeta(s) = \zeta(1,s)</span></div><div class='line' id='LC421'><span class="cm">     *   @f]</span></div><div class='line' id='LC422'><span class="cm">     */</span></div><div class='line' id='LC423'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="k">template</span><span class="o">&lt;</span><span class="k">typename</span> <span class="n">_Tp</span><span class="o">&gt;</span></div><div class='line' id='LC424'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="kr">inline</span> <span class="n">_Tp</span></div><div class='line' id='LC425'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="n">__hurwitz_zeta</span><span class="p">(</span><span class="n">_Tp</span> <span class="n">__a</span><span class="p">,</span> <span class="n">_Tp</span> <span class="n">__s</span><span class="p">)</span></div><div class='line' id='LC426'>&nbsp;&nbsp;&nbsp;&nbsp;<span class="p">{</span> <span class="k">return</span> <span class="n">__hurwitz_zeta_glob</span><span class="p">(</span><span class="n">__a</span><span class="p">,</span> <span class="n">__s</span><span class="p">);</span> <span class="p">}</span></div><div class='line' id='LC427'><br></div><div class='line' id='LC428'>&nbsp;&nbsp;<span class="n">_GLIBCXX_END_NAMESPACE_VERSION</span></div><div class='line' id='LC429'>&nbsp;&nbsp;<span class="p">}</span> <span class="c1">// namespace std::tr1::__detail</span></div><div class='line' id='LC430'><span class="p">}</span></div><div class='line' id='LC431'><span class="p">}</span></div><div class='line' id='LC432'><br></div><div class='line' id='LC433'><span class="cp">#endif </span><span class="c1">// _GLIBCXX_TR1_RIEMANN_ZETA_TCC</span></div></pre></div></td>
         </tr>
       </table>
  </div>

  </div>
</div>

<a href="#jump-to-line" rel="facebox[.linejump]" data-hotkey="l" style="display:none">Jump to Line</a>
<div id="jump-to-line" style="display:none">
  <form accept-charset="UTF-8" class="js-jump-to-line-form">
    <input class="linejump-input js-jump-to-line-field" type="text" placeholder="Jump to line&hellip;" autofocus>
    <button type="submit" class="button">Go</button>
  </form>
</div>

        </div>

      </div><!-- /.repo-container -->
      <div class="modal-backdrop"></div>
    </div><!-- /.container -->
  </div><!-- /.site -->


    </div><!-- /.wrapper -->

      <div class="container">
  <div class="site-footer">
    <ul class="site-footer-links right">
      <li><a href="https://status.github.com/">Status</a></li>
      <li><a href="http://developer.github.com">API</a></li>
      <li><a href="http://training.github.com">Training</a></li>
      <li><a href="http://shop.github.com">Shop</a></li>
      <li><a href="/blog">Blog</a></li>
      <li><a href="/about">About</a></li>

    </ul>

    <a href="/" aria-label="Homepage">
      <span class="mega-octicon octicon-mark-github" title="GitHub"></span>
    </a>

    <ul class="site-footer-links">
      <li>&copy; 2014 <span title="0.03066s from github-fe137-cp1-prd.iad.github.net">GitHub</span>, Inc.</li>
        <li><a href="/site/terms">Terms</a></li>
        <li><a href="/site/privacy">Privacy</a></li>
        <li><a href="/security">Security</a></li>
        <li><a href="/contact">Contact</a></li>
    </ul>
  </div><!-- /.site-footer -->
</div><!-- /.container -->


    <div class="fullscreen-overlay js-fullscreen-overlay" id="fullscreen_overlay">
  <div class="fullscreen-container js-suggester-container">
    <div class="textarea-wrap">
      <textarea name="fullscreen-contents" id="fullscreen-contents" class="fullscreen-contents js-fullscreen-contents js-suggester-field" placeholder=""></textarea>
    </div>
  </div>
  <div class="fullscreen-sidebar">
    <a href="#" class="exit-fullscreen js-exit-fullscreen tooltipped tooltipped-w" aria-label="Exit Zen Mode">
      <span class="mega-octicon octicon-screen-normal"></span>
    </a>
    <a href="#" class="theme-switcher js-theme-switcher tooltipped tooltipped-w"
      aria-label="Switch themes">
      <span class="octicon octicon-color-mode"></span>
    </a>
  </div>
</div>



    <div id="ajax-error-message" class="flash flash-error">
      <span class="octicon octicon-alert"></span>
      <a href="#" class="octicon octicon-x close js-ajax-error-dismiss" aria-label="Dismiss error"></a>
      Something went wrong with that request. Please try again.
    </div>


      <script crossorigin="anonymous" src="https://assets-cdn.github.com/assets/frameworks-8c6e10f6700610e693b29e274318b3714523ca3e.js" type="text/javascript"></script>
      <script async="async" crossorigin="anonymous" src="https://assets-cdn.github.com/assets/github-c68883069b57f18328411264a3ba219b75367087.js" type="text/javascript"></script>
      
      
        <script async src="https://www.google-analytics.com/analytics.js"></script>
  </body>
</html>

