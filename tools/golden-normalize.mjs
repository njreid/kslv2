import path from 'node:path'
import { fileURLToPath } from 'node:url'
import { formatParseTree, listKdlFiles, normalizeFixtureAst, parseKslText, readFile, replaceExtension, writeJson, writeText } from './ksl-lib.mjs'

const __dirname = path.dirname(fileURLToPath(import.meta.url))
const root = path.resolve(__dirname, '..')

for (const group of ['valid', 'invalid']) {
  const dir = path.join(root, 'tests', 'golden', group)
  for (const fixturePath of listKdlFiles(dir)) {
    const text = readFile(fixturePath)
    const tree = parseKslText(text)
    writeText(replaceExtension(fixturePath, '.kdl', '.parse.txt'), formatParseTree(tree))
    if (group === 'valid') {
      writeJson(replaceExtension(fixturePath, '.kdl', '.ast.json'), normalizeFixtureAst(tree))
    }
  }
}

console.log('Wrote parse snapshots for valid/invalid fixtures and AST snapshots for valid fixtures.')
