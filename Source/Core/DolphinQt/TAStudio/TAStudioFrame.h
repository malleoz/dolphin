// Copyright 2020 Dolphin Emulator Project
// Licensed under GPLv2
// Refer to the license.txt file included.

#pragma once

// Class written by Tales Carvalho (a.k.a. THC98) and Sean Owens (a.k.a. Malleo)

#include <algorithm>
#include <string>
#include <vector>

#include <QDialog>
#include <QCheckBox>

#include "Core/Movie.h"
#include "MainWindow.h"

#include "InputCommon/GCPadStatus.h"

struct TAStudioInput
{
  u64 FrameCount;
  u64 InputCount;
  GCPadStatus Input;
};

/*class InputGrid : public wxGrid
{
private:
  enum
  {
    COLUMN_INPUT_COUNT = 0,
    COLUMN_VI_COUNT,
    COLUMN_ANA_X,
    COLUMN_ANA_Y,
    COLUMN_A,
    COLUMN_B,
    COLUMN_X,
    COLUMN_Y,
    COLUMN_S,
    COLUMN_Z,
    COLUMN_L,
    COLUMN_R,
    COLUMN_L_ANA,
    COLUMN_R_ANA,
    COLUMN_D_UP,
    COLUMN_D_DOWN,
    COLUMN_D_LEFT,
    COLUMN_D_RIGHT,
    COLUMN_C_X,
    COLUMN_C_Y
  };
  const std::vector<wxString> COLUMN_LABEL = {"Input", "VI", "aX", "aY", "A",  "B",  "X",
                                              "Y",     "S",  "Z",  "L",  "R",  "La", "Ra",
                                              "dU",    "dD", "dL", "dR", "cX", "cY"};
  std::vector<TAStudioInput> m_inputVector;
  u64 m_firstInputInGrid;
  int m_gridNumberOfRows;
  wxDECLARE_EVENT_TABLE();

public:
  InputGrid(wxWindow* parent);
  void OnSelectCell(wxGridEvent& evt);
  void UpdateGridValues(bool groupByVI);
  void AddInputToVector(u64 frameCount, u64 inputCount, GCPadStatus* input, bool groupByVI);
  GCPadStatus GetInputAtRow(u64 inputFrame);
  void DeleteInputAtRow(int row);
  void SetInputAtRow(int row, TAStudioInput tastudioInput);
  GCPadStatus GetInputAtInputFrame(int inputFrame);
  int GetTAStudioInputVectorSize();
};*/

class TAStudioFrame : public QDialog
{
protected:
  /*wxStaticBoxSizer* m_controlWrapper;
  InputGrid* m_inputGrid;
  // wxTextCtrl* m_saveFrameState;
  wxTextCtrl* m_inputFrameCount;
  // wxTextCtrl* m_currentInput;
  wxCheckBox* m_sendInputsToDolphin;
  wxCheckBox* m_groupByVI;*/
  QString movieName;

public:
  /*TAStudioFrame(wxWindow* parent, wxWindowID id = wxID_ANY, const wxString& title = _("TAStudio"),
                const wxPoint& pos = wxDefaultPosition, const wxSize& size = wxDefaultSize,
                long style = wxDEFAULT_DIALOG_STYLE | wxRESIZE_BORDER);*/
  TAStudioFrame(QWidget* parent);
  void GetMovieName(QString name);
  void GetInput(GCPadStatus* PadStatus);
  void SetInput(GCPadStatus* PadStatus);
};
