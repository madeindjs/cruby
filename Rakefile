require 'bundler/gem_tasks'
require 'rspec/core/rake_task'
require 'rake/extensiontask'

RSpec::Core::RakeTask.new(:spec)
task default: :spec

Rake::ExtensionTask.new('crubyc')

desc 'Compile extensions and run tests'
task test: %i[compile spec] do
end

desc 'Build documentation'
task :doc do
  require 'asciidoctor'
  Asciidoctor.convert_file 'README.adoc' # , to_dir: 'doc', doctype: :article, header_footer: true
end
