RSpec.describe Cruby do
  it 'Should do something with no error' do
    expect(Cruby.cprint('hello')).to match(/Printed from C/)
  end
end
