package tree_sitter_blueprint_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-blueprint"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_blueprint.Language())
	if language == nil {
		t.Errorf("Error loading Blueprint grammar")
	}
}
