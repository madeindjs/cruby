require 'bundler/gem_tasks'
require 'rspec/core/rake_task'
require 'rake/extensiontask'

RSpec::Core::RakeTask.new(:spec)
task default: :spec

Rake::ExtensionTask.new('crubyc')

desc 'Compile extensions and run tests'
task test: %i[compile spec] do
end
