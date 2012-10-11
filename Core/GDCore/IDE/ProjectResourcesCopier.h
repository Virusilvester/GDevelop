/** \file
 *  Game Develop
 *  2008-2012 Florian Rival (Florian.Rival@gmail.com)
 */
#ifndef PROJECTRESOURCESCOPIER_H
#define PROJECTRESOURCESCOPIER_H
#include <string>
namespace gd { class Project; }
class wxProgressDialog;

namespace gd
{

/**
 * \brief Copy all resources files of a project to a directory.
 *
 * \ingroup IDE
 */
class GD_CORE_API ProjectResourcesCopier
{
public:
    /**
     * \brief Copy all resources files of a \a project to a the specified \a destinationDirectory.
     *
     * \param project The project to be used
     * \param destinationDirectory The directory where resources must be copied to
     * \param updateOriginalProject If set to true, \a project will be updated with the new resources filenames.
     * \param optionalProgressDialog An optional pointer to a wxProgressDialog. Can be NULL.
     *
     * \return true if no error happened
     */
    static bool CopyAllResourcesTo(gd::Project & project, std::string destinationDirectory, bool updateOriginalProject,  wxProgressDialog * optionalProgressDialog = NULL);
};

}

#endif // PROJECTRESOURCESCOPIER_H
