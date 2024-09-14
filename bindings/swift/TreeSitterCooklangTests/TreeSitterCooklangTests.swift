import XCTest
import SwiftTreeSitter
import TreeSitterCooklang

final class TreeSitterCooklangTests: XCTestCase {
    func testCanLoadGrammar() throws {
        let parser = Parser()
        let language = Language(language: tree_sitter_cooklang())
        XCTAssertNoThrow(try parser.setLanguage(language),
                         "Error loading Cooklang grammar")
    }
}
