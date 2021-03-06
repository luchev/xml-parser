#pragma once
#include <string>
/** \file */

/** File stream processing
 * 
 * Introduce static methods for managing filestreams
 */
class File {
 public:
    /** Read a file to a string
     * \param[in] fileName - path to the file
     * \return string - contents of the file or empty string if the function failed to read the file
     */
    static std::string readFileToString(const std::string & fileName);
};
