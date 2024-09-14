package tree_sitter_cooklang_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_cooklang "github.com/tree-sitter/tree-sitter-cooklang/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_cooklang.Language())
	if language == nil {
		t.Errorf("Error loading Cooklang grammar")
	}
}
