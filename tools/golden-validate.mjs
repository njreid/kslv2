import path from 'node:path'
import { fileURLToPath } from 'node:url'
import { listKdlFiles, parseKslText, readFile, replaceExtension, validateFixture, writeJson } from './ksl-lib.mjs'

const __dirname = path.dirname(fileURLToPath(import.meta.url))
const root = path.resolve(__dirname, '..')
const dir = path.join(root, 'tests', 'golden', 'invalid')

for (const fixturePath of listKdlFiles(dir)) {
  const text = readFile(fixturePath)
  const tree = parseKslText(text)
  writeJson(replaceExtension(fixturePath, '.kdl', '.diagnostics.json'), validateFixture(tree))
}

console.log('Wrote diagnostic snapshots for invalid fixtures.')
