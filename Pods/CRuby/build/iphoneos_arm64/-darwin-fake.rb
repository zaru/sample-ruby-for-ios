baseruby="/usr/local/opt/rbenv/versions/2.2.4/bin/ruby --disable=gems"
_\
=begin
_=
ruby="${RUBY-$baseruby}"
case "$ruby" in "echo "*) $ruby; exit $?;; esac
case "$0" in /*) r=-r"$0";; *) r=-r"./$0";; esac
exec $ruby "$r" "$@"
=end
=baseruby
class Object
  remove_const :CROSS_COMPILING if defined?(CROSS_COMPILING)
  CROSS_COMPILING = RUBY_PLATFORM
  constants.grep(/^RUBY_/) {|n| remove_const n}
  RUBY_VERSION = "2.3.0"
  RUBY_RELEASE_DATE = "2015-12-25"
  RUBY_PLATFORM = "-darwin"
  RUBY_PATCHLEVEL = 0
  RUBY_REVISION = 53290
  RUBY_DESCRIPTION = "ruby 2.3.0p0 (2015-12-25 revision 53290) [-darwin]"
  RUBY_COPYRIGHT = "ruby - Copyright (C) 1993-2015 Yukihiro Matsumoto"
  RUBY_ENGINE = "ruby"
  RUBY_ENGINE_VERSION = "2.3.0"
end
builddir = File.dirname(File.expand_path(__FILE__))
srcdir = "/Users/hiro/Library/Caches/CocoaPods/Pods/External/CRuby/193c1c8340a477e394e63f996e6fccdb/ruby"
top_srcdir = File.realpath(srcdir, builddir)
fake = File.join(top_srcdir, "tool/fake.rb")
eval(File.read(fake), nil, fake)
ENV["RUBYOPT"] = ["-r#{__FILE__}", ENV["RUBYOPT"]].compact.join(" ")
